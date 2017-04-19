#include "File.h"
#include "TestProgram.h"

using namespace std;

File::File(QObject * parent) : QObject(parent) {
	
}

File::~File() {
	
}

void File::Open(QString filePath)
{
	QFile file(filePath);
	if (!file.open(QIODevice::ReadOnly))
	{
		emit requestMessageBox((QString)"info", file.errorString());
	}
	else {
		QTextStream in(&file);
		QString content = in.readAll();
		emit requestContent(content);

		in.seek(0);	//讓讀取的File指標移到開始

		QString line = in.readLine();
		int records = 0;
		
		while (!(line = in.readLine()).isEmpty())
			records++;

		emit requestSetBuff(records);

		in.seek(0);	//讓讀取的File指標移到開始

		line = in.readLine();	//過濾第一行
		QStringList list;
		//list用來過濾空格blank、逗點comma、分號semicolon

		int indexOfBuff = 0;

		while (!(line = in.readLine()).isEmpty())
		{
			list = line.split(QRegExp("[ ,;]"), QString::SkipEmptyParts);
			//過濾空格blank、逗點comma、分號semicolon

			/*-------------------------------Find Input value-------------------------------*/
			QRegExp rx("[0-1]");
			int firstIndexOfNumber = list.indexOf(rx);
			int lastIndexOfNumber = list.lastIndexOf(rx);

			unsigned int value = 0;
			for (unsigned int exp = 0; lastIndexOfNumber >= firstIndexOfNumber; lastIndexOfNumber--, exp++)
			{
				value += list[lastIndexOfNumber].toUInt() * pow(2, exp);
			}
			emit requestNewValue(value, indexOfBuff);
			/*-------------------------------End Find Input value-------------------------------*/
		}
		file.close();
	}
}
