/********************************************************************************
** Form generated from reading UI file 'cse396_group1_interface.ui'
**
** Created: Sun 18. May 12:16:51 2014
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSE396_GROUP1_INTERFACE_H
#define UI_CSE396_GROUP1_INTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_CSE396_Group1_Interface
{
public:
    QWidget *centralWidget;
    QCustomPlot *myPlot;
    QLabel *label_2;
    QLabel *deadmanLabel;
    QLabel *hardwareEdit;
    QLabel *k1Label;
    QLabel *hardwareLabel;
    QLabel *deadmanEdit;
    QLabel *k2Label;
    QDoubleSpinBox *k1Spin;
    QDoubleSpinBox *k2Spin;
    QLabel *initialLabel;
    QLabel *stateLabel;
    QLabel *stateEdit;
    QCustomPlot *myPlot2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CSE396_Group1_Interface)
    {
        if (CSE396_Group1_Interface->objectName().isEmpty())
            CSE396_Group1_Interface->setObjectName(QString::fromUtf8("CSE396_Group1_Interface"));
        CSE396_Group1_Interface->resize(800, 600);
        centralWidget = new QWidget(CSE396_Group1_Interface);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        myPlot = new QCustomPlot(centralWidget);
        myPlot->setObjectName(QString::fromUtf8("myPlot"));
        myPlot->setGeometry(QRect(400, 0, 400, 350));
        label_2 = new QLabel(myPlot);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 330, 46, 13));
        deadmanLabel = new QLabel(centralWidget);
        deadmanLabel->setObjectName(QString::fromUtf8("deadmanLabel"));
        deadmanLabel->setGeometry(QRect(10, 430, 210, 30));
        QFont font;
        font.setPointSize(12);
        deadmanLabel->setFont(font);
        hardwareEdit = new QLabel(centralWidget);
        hardwareEdit->setObjectName(QString::fromUtf8("hardwareEdit"));
        hardwareEdit->setGeometry(QRect(230, 390, 70, 30));
        hardwareEdit->setFont(font);
        k1Label = new QLabel(centralWidget);
        k1Label->setObjectName(QString::fromUtf8("k1Label"));
        k1Label->setGeometry(QRect(10, 470, 40, 30));
        k1Label->setFont(font);
        k1Label->setFrameShape(QFrame::WinPanel);
        hardwareLabel = new QLabel(centralWidget);
        hardwareLabel->setObjectName(QString::fromUtf8("hardwareLabel"));
        hardwareLabel->setGeometry(QRect(10, 390, 160, 30));
        QFont font1;
        font1.setPointSize(12);
        font1.setKerning(false);
        hardwareLabel->setFont(font1);
        deadmanEdit = new QLabel(centralWidget);
        deadmanEdit->setObjectName(QString::fromUtf8("deadmanEdit"));
        deadmanEdit->setGeometry(QRect(230, 430, 70, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setKerning(true);
        deadmanEdit->setFont(font2);
        k2Label = new QLabel(centralWidget);
        k2Label->setObjectName(QString::fromUtf8("k2Label"));
        k2Label->setGeometry(QRect(10, 510, 40, 30));
        k2Label->setFont(font);
        k2Label->setFrameShape(QFrame::WinPanel);
        k1Spin = new QDoubleSpinBox(centralWidget);
        k1Spin->setObjectName(QString::fromUtf8("k1Spin"));
        k1Spin->setGeometry(QRect(60, 470, 100, 30));
        k1Spin->setFont(font);
        k1Spin->setDecimals(1);
        k1Spin->setSingleStep(0.1);
        k1Spin->setValue(40);
        k2Spin = new QDoubleSpinBox(centralWidget);
        k2Spin->setObjectName(QString::fromUtf8("k2Spin"));
        k2Spin->setGeometry(QRect(60, 510, 100, 30));
        k2Spin->setFont(font);
        k2Spin->setDecimals(1);
        k2Spin->setSingleStep(0.1);
        k2Spin->setValue(40);
        initialLabel = new QLabel(centralWidget);
        initialLabel->setObjectName(QString::fromUtf8("initialLabel"));
        initialLabel->setGeometry(QRect(10, 360, 150, 30));
        initialLabel->setFont(font);
        initialLabel->setFrameShape(QFrame::Box);
        initialLabel->setAlignment(Qt::AlignCenter);
        stateLabel = new QLabel(centralWidget);
        stateLabel->setObjectName(QString::fromUtf8("stateLabel"));
        stateLabel->setGeometry(QRect(400, 390, 50, 30));
        stateLabel->setFont(font);
        stateLabel->setFrameShape(QFrame::Box);
        stateEdit = new QLabel(centralWidget);
        stateEdit->setObjectName(QString::fromUtf8("stateEdit"));
        stateEdit->setGeometry(QRect(400, 440, 400, 30));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        stateEdit->setFont(font3);
        myPlot2 = new QCustomPlot(centralWidget);
        myPlot2->setObjectName(QString::fromUtf8("myPlot2"));
        myPlot2->setGeometry(QRect(0, 0, 400, 350));
        label = new QLabel(myPlot2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 330, 70, 13));
        CSE396_Group1_Interface->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CSE396_Group1_Interface);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        CSE396_Group1_Interface->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CSE396_Group1_Interface);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CSE396_Group1_Interface->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CSE396_Group1_Interface);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CSE396_Group1_Interface->setStatusBar(statusBar);

        retranslateUi(CSE396_Group1_Interface);

        QMetaObject::connectSlotsByName(CSE396_Group1_Interface);
    } // setupUi

    void retranslateUi(QMainWindow *CSE396_Group1_Interface)
    {
        CSE396_Group1_Interface->setWindowTitle(QApplication::translate("CSE396_Group1_Interface", "CSE396_Group1_Interface", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CSE396_Group1_Interface", "Encoder", 0, QApplication::UnicodeUTF8));
        deadmanLabel->setText(QApplication::translate("CSE396_Group1_Interface", "Deadman switch Connected:", 0, QApplication::UnicodeUTF8));
        hardwareEdit->setText(QApplication::translate("CSE396_Group1_Interface", "TextLabel", 0, QApplication::UnicodeUTF8));
        k1Label->setText(QApplication::translate("CSE396_Group1_Interface", "K1:", 0, QApplication::UnicodeUTF8));
        hardwareLabel->setText(QApplication::translate("CSE396_Group1_Interface", "Hardware Connected:", 0, QApplication::UnicodeUTF8));
        deadmanEdit->setText(QApplication::translate("CSE396_Group1_Interface", "TextLabel", 0, QApplication::UnicodeUTF8));
        k2Label->setText(QApplication::translate("CSE396_Group1_Interface", "K2:", 0, QApplication::UnicodeUTF8));
        initialLabel->setText(QApplication::translate("CSE396_Group1_Interface", "Initial Values", 0, QApplication::UnicodeUTF8));
        stateLabel->setText(QApplication::translate("CSE396_Group1_Interface", "State", 0, QApplication::UnicodeUTF8));
        stateEdit->setText(QApplication::translate("CSE396_Group1_Interface", "System is not ready", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CSE396_Group1_Interface", "Motor Encoder", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CSE396_Group1_Interface: public Ui_CSE396_Group1_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSE396_GROUP1_INTERFACE_H
