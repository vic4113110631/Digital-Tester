#include "TestProgram.h"
#include <QFileDialog>

using namespace std;

#define PCIE_USER_BAR				PCIE_BAR0		// Defines the PCIe bus bar
#define IO_ControlSignal_ADDR		0x10
#define IO_Response_ADDR			0x20
#define FIFO_WRITE_ADDR				0x00
#define	FIFO_Depth					65536
#define FIFO_SIZE					(4*65536)		// 4bytes * (65536) >> (64K)

void TestProgram::on_ReadControl_clicked()
{
	DWORD DATA = 0;
	bool bPass;

	bPass = PCIE_Read32(this->hPCIE, PCIE_USER_BAR, IO_ControlSignal_ADDR, &DATA);
	if (bPass)
		cout << "ControlSignal : " << DATA << "\n";
	else
		cout << "ControlSignal failed\n";
	
	bPass = PCIE_Read32(this->hPCIE, PCIE_USER_BAR, IO_Response_ADDR, &DATA);
	if (bPass)
		cout << "Response : " << DATA << "\n";
	else
		cout << "Response failed\n";
}

void TestProgram::on_GenerateTest_clicked()
{
	if (!hPCIE)
	{
		QMessageBox::information(this, tr("Error"), "PCIE isn't be detected");
		return;
	}

	BOOL bPass;

	const int nTestSize = FIFO_Depth * 4;
	const PCIE_LOCAL_ADDRESS FifoID_Write = FIFO_WRITE_ADDR;

	//Set 32-bit input vectors
	unsigned int* pBuff;
	pBuff = (unsigned int*)malloc(sizeof(unsigned int) * FIFO_Depth);

	if (!pBuff)
	{
		bPass = FALSE;
		QMessageBox::information(this, tr("Error"), "malloc failed");
	}
	
	//Set all values are zero
	unsigned int pattern = 0;
	memset(pBuff, pattern, sizeof(pBuff));

	// init Test pattern
	int deepath = FIFO_Depth;
	if (bPass)
	{
		for (int i = 0; i < deepath; i++)
			*(pBuff + i) = i;
	}

	//Pattern write into FIFO
	if (bPass)
	{
		bPass = PCIE_DmaFifoWrite(hPCIE, FifoID_Write, pBuff, nTestSize);
		if (!bPass)
			QMessageBox::information(this, tr("Error"), "DMA Fifo: PCIE_DmaFifoWrite failed");
	}

	sendPattern();

	if (pBuff)
		free(pBuff);
}

void TestProgram::on_GenerateTest2_clicked()
{
	if (!this->hPCIE)
	{
		QMessageBox::information(this, tr("Error"), "PCIE isn't be detected");
		return;
	}

	BOOL bPass;

	const int nTestSize = FIFO_Depth * 4;
	const PCIE_LOCAL_ADDRESS FifoID_Write = FIFO_WRITE_ADDR;

	//Set 32-bit input vectors
	unsigned int* pBuff;
	pBuff = (unsigned int*)malloc(sizeof(unsigned int) * FIFO_Depth);

	if (!pBuff)
	{
		bPass = FALSE;
		QMessageBox::information(this, tr("Error"), "Buff is not enough");
	}

	//Set all values are zero
	unsigned int pattern = 0;
	memset(pBuff, pattern, sizeof(pBuff));

	//Pattern write into FIFO
	if (bPass)
	{
		bPass = PCIE_DmaFifoWrite(hPCIE, FifoID_Write, pBuff, nTestSize);
		if (!bPass)
			QMessageBox::information(this, tr("Error"), "DMA Fifo: PCIE_DmaFifoWrite failed");
	}

	sendPattern();

	if (pBuff)
		free(pBuff);
}

void TestProgram::sendPattern()
{
	BOOL bPass;
	bPass = PCIE_Write32(hPCIE, PCIE_USER_BAR, IO_ControlSignal_ADDR, 0x01);

	DWORD DATA = 0;
	do {
		bPass = PCIE_Read32(hPCIE, PCIE_USER_BAR, IO_Response_ADDR, &DATA);
		cout << DATA << "\n";
	} while (DATA != 0);

	bPass = PCIE_Write32(hPCIE, PCIE_USER_BAR, IO_ControlSignal_ADDR, 0x00);
}

void TestProgram::on_OpenAVCFile_clicked()
{
	QString filePath = QFileDialog::getOpenFileName(
		this, tr("Open File"), "C:\\", "AVC File (*.avc)"
		);

	if (!filePath.isEmpty())
	{
		QMessageBox::information(this, tr("File Name"), filePath);
	}
	emit file->Open(filePath);
}

void TestProgram::on_SendPattern_clicked()
{
	if (pBuff == NULL) {
		QMessageBox::information(this, tr("Error"), "No AVC File Selected or Open File Again");
	}
	else if (!hPCIE) {
		QMessageBox::information(this, tr("Error"), "PCIE isn't be detected");
	}
	else {
		BOOL bPass;

		const int nTestSize = records * 4;
		const PCIE_LOCAL_ADDRESS FifoID_Write = FIFO_WRITE_ADDR;

		//Pattern write into FIFO
		if (bPass)
		{
			bPass = PCIE_DmaFifoWrite(hPCIE, FifoID_Write, pBuff, nTestSize);
			if (!bPass)
				QMessageBox::information(this, tr("Error"), "DMA Fifo: PCIE_DmaFifoWrite failed");
		}

		sendPattern();
	}
}