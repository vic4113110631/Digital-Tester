#include <TestProgram.h>

void TestProgram::addMessageBox(QString type, QString content)
{
	QMessageBox::information(this, type, content);
}

void TestProgram::setContent(QString content)
{
	ui.Content->insertPlainText(content);
}

void TestProgram::setBuff(int records)
{
	this->records = records;
	if (this->pBuff)
	{
		free(this->pBuff);
		this->pBuff = NULL;
		ui.tableWidget->setRowCount(0);	//Clear all rows
	}

	pBuff = (unsigned int*)malloc(sizeof(unsigned int) * records);	//記憶體空間配置
	if (!pBuff)
		QMessageBox::information(this, tr("Error"), "malloc failed");
}

void TestProgram::addNewValue(unsigned int value, int index)
{
	*(this->pBuff + index) = value;	//將Input value放入Buff

	int rowCount = ui.tableWidget->rowCount();
	ui.tableWidget->insertRow(rowCount);
	ui.tableWidget->setItem(rowCount, 0, new QTableWidgetItem(QString::number(value)));
	ui.tableWidget->repaint();
	qApp->processEvents();
}