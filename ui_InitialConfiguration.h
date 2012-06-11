/********************************************************************************
** Form generated from reading UI file 'InitialConfiguration.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALCONFIGURATION_H
#define UI_INITIALCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InitialConfiguration
{
public:
    QLabel *headerLabel;
    QLabel *bodyLabel;
    QLabel *bottomLabel;
    QPushButton *bottomIcon;
    QLabel *changingLabel;
    QLabel *loadingLabel;
    QLabel *label;

    void setupUi(QDialog *InitialConfiguration)
    {
        if (InitialConfiguration->objectName().isEmpty())
            InitialConfiguration->setObjectName(QString::fromUtf8("InitialConfiguration"));
        InitialConfiguration->resize(521, 384);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/aeolus-logo60*60.png"), QSize(), QIcon::Normal, QIcon::Off);
        InitialConfiguration->setWindowIcon(icon);
        InitialConfiguration->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-weight: bold;\n"
"font-size: 15px;\n"
"}\n"
"background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #eef, stop: 1 #ccf);\n"
"QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton {\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 50px;\n"
"max-width: 50px;\n"
"min-height: 13px;\n"
"max-height: 13px;\n"
"}\n"
"\n"
""));
        headerLabel = new QLabel(InitialConfiguration);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));
        headerLabel->setGeometry(QRect(210, 200, 111, 31));
        bodyLabel = new QLabel(InitialConfiguration);
        bodyLabel->setObjectName(QString::fromUtf8("bodyLabel"));
        bodyLabel->setGeometry(QRect(50, 240, 451, 20));
        bottomLabel = new QLabel(InitialConfiguration);
        bottomLabel->setObjectName(QString::fromUtf8("bottomLabel"));
        bottomLabel->setGeometry(QRect(140, 360, 351, 21));
        bottomIcon = new QPushButton(InitialConfiguration);
        bottomIcon->setObjectName(QString::fromUtf8("bottomIcon"));
        bottomIcon->setGeometry(QRect(90, 340, 51, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/aeolus-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        bottomIcon->setIcon(icon1);
        bottomIcon->setIconSize(QSize(50, 50));
        changingLabel = new QLabel(InitialConfiguration);
        changingLabel->setObjectName(QString::fromUtf8("changingLabel"));
        changingLabel->setGeometry(QRect(130, 300, 251, 20));
        loadingLabel = new QLabel(InitialConfiguration);
        loadingLabel->setObjectName(QString::fromUtf8("loadingLabel"));
        loadingLabel->setGeometry(QRect(210, 270, 101, 16));
        label = new QLabel(InitialConfiguration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, -40, 301, 271));

        retranslateUi(InitialConfiguration);

        QMetaObject::connectSlotsByName(InitialConfiguration);
    } // setupUi

    void retranslateUi(QDialog *InitialConfiguration)
    {
        InitialConfiguration->setWindowTitle(QApplication::translate("InitialConfiguration", "Dialog", 0, QApplication::UnicodeUTF8));
        headerLabel->setText(QApplication::translate("InitialConfiguration", "Aeolus TM", 0, QApplication::UnicodeUTF8));
        bodyLabel->setText(QApplication::translate("InitialConfiguration", "Meet The World's Best Cloud Management Software", 0, QApplication::UnicodeUTF8));
        bottomLabel->setText(QApplication::translate("InitialConfiguration", "Manage Your Cloud Deployment With Ease", 0, QApplication::UnicodeUTF8));
        bottomIcon->setText(QString());
        changingLabel->setText(QString());
        loadingLabel->setText(QApplication::translate("InitialConfiguration", "Loading...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("InitialConfiguration", "<html><head/><body><p><img src=\":/images/aeolus-logo.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InitialConfiguration: public Ui_InitialConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALCONFIGURATION_H
