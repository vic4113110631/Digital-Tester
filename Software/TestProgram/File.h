#pragma once
#include <QObject>
#include <QFile> 
#include <QTextStream>
#include <QThread>
#include <QMutex>
#include <iostream>

class File : public QObject {
	Q_OBJECT
	
public:
	File(QObject * parent = Q_NULLPTR);
	~File();

	void Open(QString);
signals:
	void requestMessageBox(QString, QString);
	void requestContent(QString);
	void requestSetBuff(int);
	void requestNewValue(unsigned int, int);
};
