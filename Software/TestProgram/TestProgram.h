#ifndef TESTPROGRAM_H
#define TESTPROGRAM_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMessageBox>
#include "ui_testprogram.h"
#include <iostream>
#include <PCIE.h>
#include <File.h>

class TestProgram : public QMainWindow
{
	Q_OBJECT

public:
	TestProgram(QWidget *parent = 0);
	~TestProgram();

	enum TAB {
		Introduction, Status, Open
	};
	Q_ENUM(TAB)

private:
	Ui::TestProgramClass ui;

	PCIE_HANDLE		hPCIE;
	void *lib_handle;

	unsigned int* pBuff;	//Test Memory Buff
	int records;			//number of Vectors
	File* file;				//AVC File 
	
	void PCIE_Setup();
	void sendPattern();

public slots:
	void addMessageBox(QString type, QString content);
	void setContent(QString);							//set File's content into text browser
	void setBuff(int records);							//init pBuff
	void addNewValue(unsigned int value, int index);	//add one vector to pBuff

private slots:
	void on_ReadControl_clicked();		//function about read ControlSignal and Response
	void on_GenerateTest_clicked();		//general test 0~65535 to FIFO
	void on_GenerateTest2_clicked();	//general test all zero(65536 records) to FIFO
	void on_OpenAVCFile_clicked();		//Open file by QDialog
	void on_SendPattern_clicked();		//send pBuff to FIFO and pop out vectors

	void openGithub();
	void swtichTab();
};

#endif // TESTPROGRAM_H
