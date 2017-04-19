#include "testprogram.h"
#include <QURL>
#include <QDesktopServices>
#include <QMetaEnum>

using namespace std;

TestProgram::TestProgram(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);

	this->pBuff = NULL;
	PCIE_Setup();

	QThread *thread = new QThread(this);
	file = new File();

	connect(file, SIGNAL(requestMessageBox(QString, QString)), this, SLOT(addMessageBox(QString, QString)));
	connect(file, SIGNAL(requestNewValue(unsigned int, int)), this, SLOT(addNewValue(unsigned int, int)));
	connect(file, SIGNAL(requestContent(QString)), this, SLOT(setContent(QString)));
	connect(file, SIGNAL(requestSetBuff(int)), this, SLOT(setBuff(int)));

	file->moveToThread(thread);
	thread->start();

	//hide tab because already use button to swtich tab
	ui.tabWidget->tabBar()->hide();

	//QMenu(Github) connect to slot openGithub()
	QObject::connect(ui.menuGitHub, SIGNAL(aboutToShow()), this, SLOT(openGithub()));

	//connect Button(Exit)'s clicked() to Framework's close()
	QObject::connect(ui.Exit, SIGNAL(clicked()), this, SLOT(close()));

	//connect Button's clicked() to tabWidget's tab
	QObject::connect(ui.Introduction, SIGNAL(clicked()), this, SLOT(swtichTab()));
	QObject::connect(ui.Status, SIGNAL(clicked()), this, SLOT(swtichTab()));
	QObject::connect(ui.Open, SIGNAL(clicked()), this, SLOT(swtichTab()));
}

TestProgram::~TestProgram()
{
	PCIE_Close(hPCIE);
	PCIE_Unload(lib_handle);
}

void TestProgram::PCIE_Setup()
{
	//PCI Express Setup
	lib_handle = PCIE_Load();	//Load PCI Express DLL File
	if (!lib_handle) {
		ui.ResultLoad->setText("PCIE_Load failed!");
	}
	else {
		ui.ResultLoad->setText("PCIE_Load success!");
	}
	//Open PCI Express
	hPCIE = PCIE_Open(DEFAULT_PCIE_VID, DEFAULT_PCIE_DID, 0);
	if (!hPCIE) {
		ui.ResultOpen->setText("PCIE_Open failed!");
	}
	else {
		ui.ResultOpen->setText("PCIE_Open success!");
	}
}

void TestProgram::openGithub()
{
	QString link = "https://github.com/vic4113110631";
	QDesktopServices::openUrl(QUrl(link));
}

void TestProgram::swtichTab()
{
	QPushButton* button = (QPushButton*)sender();
	QString name = button->objectName();

	/*---------------These two lines can simplify to fromType<T>()------------------*/
		//QMetaObject metaObject = this->staticMetaObject;
		//QMetaEnum metaEnum = metaObject.enumerator(metaObject.indexOfEnumerator("TAB"));
	/*------------------------------------------------------------------------------*/
	QMetaEnum metaEnum = QMetaEnum::fromType<TAB>();

	if (name == metaEnum.valueToKey(TAB::Introduction)) {
		ui.tabWidget->setCurrentIndex(TAB::Introduction);
	}
	else if (name == metaEnum.valueToKey(TAB::Status)) {
		ui.tabWidget->setCurrentIndex(TAB::Status);
	}
	else if (name == metaEnum.valueToKey(TAB::Open)) {
		ui.tabWidget->setCurrentIndex(TAB::Open);
	}
	else {

	}
}