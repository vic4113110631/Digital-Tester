/********************************************************************************
** Form generated from reading UI file 'testprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTPROGRAM_H
#define UI_TESTPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestProgramClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *sideBar;
    QVBoxLayout *verticalLayout;
    QToolButton *Introduction;
    QToolButton *Status;
    QToolButton *Open;
    QSpacerItem *verticalSpacer;
    QToolButton *Exit;
    QTabWidget *tabWidget;
    QWidget *TabIntroduction;
    QGridLayout *gridLayout_5;
    QTextBrowser *textBrowser;
    QWidget *TabStatus;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_6;
    QLabel *LoadSatus;
    QLabel *ResultLoad;
    QGridLayout *gridLayout_7;
    QLabel *OpenSatus;
    QLabel *ResultOpen;
    QGridLayout *gridLayout_4;
    QPushButton *Read_PIO;
    QLabel *Read_PIO_Status;
    QGridLayout *gridLayout_8;
    QPushButton *GenerateTest;
    QLabel *TestFunction;
    QGridLayout *gridLayout_3;
    QLabel *TestFunction_2;
    QPushButton *GenerateTest2;
    QWidget *TabFile;
    QGridLayout *gridLayout_2;
    QPushButton *OpenAVCFile;
    QPushButton *SendPattern;
    QTextBrowser *Content;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menuGitHub;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestProgramClass)
    {
        if (TestProgramClass->objectName().isEmpty())
            TestProgramClass->setObjectName(QStringLiteral("TestProgramClass"));
        TestProgramClass->resize(793, 595);
        centralWidget = new QWidget(TestProgramClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        sideBar = new QWidget(centralWidget);
        sideBar->setObjectName(QStringLiteral("sideBar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sideBar->sizePolicy().hasHeightForWidth());
        sideBar->setSizePolicy(sizePolicy);
        sideBar->setMinimumSize(QSize(120, 0));
        QFont font;
        font.setPointSize(9);
        sideBar->setFont(font);
        sideBar->setStyleSheet(QStringLiteral("SideBar"));
        verticalLayout = new QVBoxLayout(sideBar);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Introduction = new QToolButton(sideBar);
        Introduction->setObjectName(QStringLiteral("Introduction"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Introduction->sizePolicy().hasHeightForWidth());
        Introduction->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(14);
        Introduction->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/TestProgram/Resources/Icon/Chip.png"), QSize(), QIcon::Normal, QIcon::Off);
        Introduction->setIcon(icon);
        Introduction->setIconSize(QSize(50, 50));
        Introduction->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(Introduction);

        Status = new QToolButton(sideBar);
        Status->setObjectName(QStringLiteral("Status"));
        sizePolicy1.setHeightForWidth(Status->sizePolicy().hasHeightForWidth());
        Status->setSizePolicy(sizePolicy1);
        Status->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/TestProgram/Resources/Icon/Status.png"), QSize(), QIcon::Normal, QIcon::Off);
        Status->setIcon(icon1);
        Status->setIconSize(QSize(50, 50));
        Status->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(Status);

        Open = new QToolButton(sideBar);
        Open->setObjectName(QStringLiteral("Open"));
        sizePolicy1.setHeightForWidth(Open->sizePolicy().hasHeightForWidth());
        Open->setSizePolicy(sizePolicy1);
        Open->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/TestProgram/Resources/Icon/File.png"), QSize(), QIcon::Normal, QIcon::Off);
        Open->setIcon(icon2);
        Open->setIconSize(QSize(50, 50));
        Open->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(Open);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Exit = new QToolButton(sideBar);
        Exit->setObjectName(QStringLiteral("Exit"));
        sizePolicy1.setHeightForWidth(Exit->sizePolicy().hasHeightForWidth());
        Exit->setSizePolicy(sizePolicy1);
        Exit->setFont(font1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/TestProgram/Resources/Icon/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        Exit->setIcon(icon3);
        Exit->setIconSize(QSize(50, 50));
        Exit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(Exit);

        Open->raise();
        Status->raise();
        Exit->raise();
        Introduction->raise();

        gridLayout->addWidget(sideBar, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(12);
        tabWidget->setFont(font2);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabBarAutoHide(false);
        TabIntroduction = new QWidget();
        TabIntroduction->setObjectName(QStringLiteral("TabIntroduction"));
        gridLayout_5 = new QGridLayout(TabIntroduction);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        textBrowser = new QTextBrowser(TabIntroduction);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout_5->addWidget(textBrowser, 0, 0, 1, 1);

        tabWidget->addTab(TabIntroduction, QString());
        TabStatus = new QWidget();
        TabStatus->setObjectName(QStringLiteral("TabStatus"));
        verticalLayout_2 = new QVBoxLayout(TabStatus);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        LoadSatus = new QLabel(TabStatus);
        LoadSatus->setObjectName(QStringLiteral("LoadSatus"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LoadSatus->sizePolicy().hasHeightForWidth());
        LoadSatus->setSizePolicy(sizePolicy2);
        LoadSatus->setMinimumSize(QSize(140, 35));
        LoadSatus->setMaximumSize(QSize(16777215, 16777215));
        LoadSatus->setFont(font1);
        LoadSatus->setStyleSheet(QStringLiteral(""));
        LoadSatus->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LoadSatus, 0, 0, 1, 1);

        ResultLoad = new QLabel(TabStatus);
        ResultLoad->setObjectName(QStringLiteral("ResultLoad"));
        sizePolicy2.setHeightForWidth(ResultLoad->sizePolicy().hasHeightForWidth());
        ResultLoad->setSizePolicy(sizePolicy2);
        ResultLoad->setMinimumSize(QSize(160, 35));
        ResultLoad->setMaximumSize(QSize(16777215, 16777215));
        ResultLoad->setFont(font1);
        ResultLoad->setStyleSheet(QStringLiteral(""));
        ResultLoad->setAlignment(Qt::AlignCenter);
        ResultLoad->setIndent(-1);

        gridLayout_6->addWidget(ResultLoad, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_6);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        OpenSatus = new QLabel(TabStatus);
        OpenSatus->setObjectName(QStringLiteral("OpenSatus"));
        sizePolicy2.setHeightForWidth(OpenSatus->sizePolicy().hasHeightForWidth());
        OpenSatus->setSizePolicy(sizePolicy2);
        OpenSatus->setMinimumSize(QSize(140, 35));
        OpenSatus->setMaximumSize(QSize(16777215, 16777215));
        OpenSatus->setFont(font1);
        OpenSatus->setStyleSheet(QStringLiteral(""));
        OpenSatus->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(OpenSatus, 0, 0, 1, 1);

        ResultOpen = new QLabel(TabStatus);
        ResultOpen->setObjectName(QStringLiteral("ResultOpen"));
        sizePolicy2.setHeightForWidth(ResultOpen->sizePolicy().hasHeightForWidth());
        ResultOpen->setSizePolicy(sizePolicy2);
        ResultOpen->setMinimumSize(QSize(160, 35));
        ResultOpen->setMaximumSize(QSize(16777215, 16777215));
        ResultOpen->setFont(font1);
        ResultOpen->setStyleSheet(QStringLiteral(""));
        ResultOpen->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(ResultOpen, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_7);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        Read_PIO = new QPushButton(TabStatus);
        Read_PIO->setObjectName(QStringLiteral("Read_PIO"));
        sizePolicy2.setHeightForWidth(Read_PIO->sizePolicy().hasHeightForWidth());
        Read_PIO->setSizePolicy(sizePolicy2);
        Read_PIO->setMinimumSize(QSize(0, 40));
        Read_PIO->setFont(font1);
        Read_PIO->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(Read_PIO, 0, 1, 1, 1);

        Read_PIO_Status = new QLabel(TabStatus);
        Read_PIO_Status->setObjectName(QStringLiteral("Read_PIO_Status"));
        sizePolicy2.setHeightForWidth(Read_PIO_Status->sizePolicy().hasHeightForWidth());
        Read_PIO_Status->setSizePolicy(sizePolicy2);
        Read_PIO_Status->setMinimumSize(QSize(0, 0));
        Read_PIO_Status->setMaximumSize(QSize(16777215, 16777215));
        Read_PIO_Status->setFont(font1);
        Read_PIO_Status->setStyleSheet(QStringLiteral(""));
        Read_PIO_Status->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(Read_PIO_Status, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        GenerateTest = new QPushButton(TabStatus);
        GenerateTest->setObjectName(QStringLiteral("GenerateTest"));
        sizePolicy2.setHeightForWidth(GenerateTest->sizePolicy().hasHeightForWidth());
        GenerateTest->setSizePolicy(sizePolicy2);
        GenerateTest->setFont(font1);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/TestProgram/Resources/Icon/Generate.png"), QSize(), QIcon::Normal, QIcon::Off);
        GenerateTest->setIcon(icon4);
        GenerateTest->setIconSize(QSize(32, 32));

        gridLayout_8->addWidget(GenerateTest, 0, 2, 1, 1);

        TestFunction = new QLabel(TabStatus);
        TestFunction->setObjectName(QStringLiteral("TestFunction"));
        sizePolicy2.setHeightForWidth(TestFunction->sizePolicy().hasHeightForWidth());
        TestFunction->setSizePolicy(sizePolicy2);
        TestFunction->setFont(font1);
        TestFunction->setStyleSheet(QStringLiteral(""));
        TestFunction->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(TestFunction, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_8);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        TestFunction_2 = new QLabel(TabStatus);
        TestFunction_2->setObjectName(QStringLiteral("TestFunction_2"));
        sizePolicy2.setHeightForWidth(TestFunction_2->sizePolicy().hasHeightForWidth());
        TestFunction_2->setSizePolicy(sizePolicy2);
        TestFunction_2->setFont(font1);
        TestFunction_2->setStyleSheet(QStringLiteral(""));
        TestFunction_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(TestFunction_2, 0, 0, 1, 1);

        GenerateTest2 = new QPushButton(TabStatus);
        GenerateTest2->setObjectName(QStringLiteral("GenerateTest2"));
        sizePolicy2.setHeightForWidth(GenerateTest2->sizePolicy().hasHeightForWidth());
        GenerateTest2->setSizePolicy(sizePolicy2);
        GenerateTest2->setFont(font1);
        GenerateTest2->setIcon(icon4);
        GenerateTest2->setIconSize(QSize(32, 32));

        gridLayout_3->addWidget(GenerateTest2, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        tabWidget->addTab(TabStatus, QString());
        TabFile = new QWidget();
        TabFile->setObjectName(QStringLiteral("TabFile"));
        gridLayout_2 = new QGridLayout(TabFile);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        OpenAVCFile = new QPushButton(TabFile);
        OpenAVCFile->setObjectName(QStringLiteral("OpenAVCFile"));
        sizePolicy1.setHeightForWidth(OpenAVCFile->sizePolicy().hasHeightForWidth());
        OpenAVCFile->setSizePolicy(sizePolicy1);
        OpenAVCFile->setIcon(icon2);
        OpenAVCFile->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(OpenAVCFile, 0, 0, 1, 2);

        SendPattern = new QPushButton(TabFile);
        SendPattern->setObjectName(QStringLiteral("SendPattern"));
        SendPattern->setFont(font1);
        SendPattern->setIcon(icon4);
        SendPattern->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(SendPattern, 3, 0, 1, 2);

        Content = new QTextBrowser(TabFile);
        Content->setObjectName(QStringLiteral("Content"));

        gridLayout_2->addWidget(Content, 1, 0, 2, 1);

        tableWidget = new QTableWidget(TabFile);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font2);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy3);
        tableWidget->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(tableWidget, 1, 1, 2, 1);

        tabWidget->addTab(TabFile, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        TestProgramClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestProgramClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 793, 22));
        menuBar->setLayoutDirection(Qt::RightToLeft);
        menuGitHub = new QMenu(menuBar);
        menuGitHub->setObjectName(QStringLiteral("menuGitHub"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/TestProgram/Resources/Icon/Github.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuGitHub->setIcon(icon5);
        TestProgramClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestProgramClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TestProgramClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestProgramClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TestProgramClass->setStatusBar(statusBar);

        menuBar->addAction(menuGitHub->menuAction());

        retranslateUi(TestProgramClass);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(TestProgramClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestProgramClass)
    {
        TestProgramClass->setWindowTitle(QApplication::translate("TestProgramClass", "TestProgram", 0));
        Introduction->setText(QApplication::translate("TestProgramClass", "Introduction", 0));
        Status->setText(QApplication::translate("TestProgramClass", "PCI Express \n"
" Status", 0));
        Open->setText(QApplication::translate("TestProgramClass", "Open", 0));
        Exit->setText(QApplication::translate("TestProgramClass", "Exit", 0));
        textBrowser->setHtml(QApplication::translate("TestProgramClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Agency FB'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">This \343\200\214</span><span style=\" font-size:14pt; font-weight:600;\">Test Program</span><span style=\" font-size:14pt;\">\343\200\215 is created by Qt.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">This communication between PC a"
                        "nd FPGA is based on \343\200\214ALTERA\343\200\215's </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">PCI Express framework DLL files(TERASIC_PCIE_QSYS \343\200\201TERASIC_PCIE_QSYSx64). </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Project is based on \343\200\214</span><span style=\" font-size:14pt; font-weight:600;\">ALTERA DE2i-150</span><span style=\" font-size:14pt;\">\343\200\215 board. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Using </span><span style=\" font-siz"
                        "e:14pt; font-weight:600;\">Qsys </span><span style=\" font-size:14pt;\">construct hardware.  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Author:  </span><span style=\" font-size:14pt; font-weight:600;\">William.Chen (Wei-Ren Chen)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">            A student from National Taiwan Ocean University</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">E-mail:  vic4113110631@gmail.com</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(TabIntroduction), QApplication::translate("TestProgramClass", "Introduction", 0));
        LoadSatus->setText(QApplication::translate("TestProgramClass", "PCI Express Load Satus :", 0));
        ResultLoad->setText(QApplication::translate("TestProgramClass", "TextLabel", 0));
        OpenSatus->setText(QApplication::translate("TestProgramClass", "PCI Express Open Satus :", 0));
        ResultOpen->setText(QApplication::translate("TestProgramClass", "TextLabel", 0));
        Read_PIO->setText(QApplication::translate("TestProgramClass", "Read Control", 0));
        Read_PIO_Status->setText(QApplication::translate("TestProgramClass", "Read PIO Status", 0));
        GenerateTest->setText(QApplication::translate("TestProgramClass", "Send", 0));
        TestFunction->setText(QApplication::translate("TestProgramClass", "Send UInt 0~65535\n"
"(65536 records of data)", 0));
        TestFunction_2->setText(QApplication::translate("TestProgramClass", "Send UInt: All values are zero\n"
"(65536 records of data)", 0));
        GenerateTest2->setText(QApplication::translate("TestProgramClass", "Send", 0));
        tabWidget->setTabText(tabWidget->indexOf(TabStatus), QApplication::translate("TestProgramClass", "PCI Express", 0));
        OpenAVCFile->setText(QApplication::translate("TestProgramClass", "Open AVC File", 0));
        SendPattern->setText(QApplication::translate("TestProgramClass", "Send Patten", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TestProgramClass", "Value", 0));
        tabWidget->setTabText(tabWidget->indexOf(TabFile), QApplication::translate("TestProgramClass", "AVC File", 0));
        menuGitHub->setTitle(QApplication::translate("TestProgramClass", "GitHub", 0));
    } // retranslateUi

};

namespace Ui {
    class TestProgramClass: public Ui_TestProgramClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTPROGRAM_H
