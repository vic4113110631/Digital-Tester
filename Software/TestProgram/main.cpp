#include "testprogram.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TestProgram w;
	w.show();
	w.setWindowTitle("Digital Tester");
	return a.exec();
}
