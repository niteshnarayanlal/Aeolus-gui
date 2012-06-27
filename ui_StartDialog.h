/********************************************************************************
** Form generated from reading UI file 'StartDialog.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTDIALOG_H
#define UI_STARTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StartDialog
{
public:
    QLabel *iconLabel;
    QPushButton *loginPushButton;
    QPushButton *initialConfigurationPushButton;

    void setupUi(QDialog *StartDialog)
    {
        if (StartDialog->objectName().isEmpty())
            StartDialog->setObjectName(QString::fromUtf8("StartDialog"));
        StartDialog->resize(409, 264);
        StartDialog->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}\n"
"QCommandLinkButton\n"
"{\n"
"}\n"
"QDialog\n"
"{\n"
"background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #eef, stop: 1 #ccf);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #28d, stop: 0.1 #39e, stop: 0.49 #47c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 70px;\n"
"max-width:70px;\n"
"min-height: 17px;\n"
"max-height: 17px;\n"
"}"));
        iconLabel = new QLabel(StartDialog);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setGeometry(QRect(100, 10, 231, 211));
        loginPushButton = new QPushButton(StartDialog);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        loginPushButton->setGeometry(QRect(280, 220, 82, 25));
        initialConfigurationPushButton = new QPushButton(StartDialog);
        initialConfigurationPushButton->setObjectName(QString::fromUtf8("initialConfigurationPushButton"));
        initialConfigurationPushButton->setGeometry(QRect(40, 220, 82, 25));

        retranslateUi(StartDialog);

        QMetaObject::connectSlotsByName(StartDialog);
    } // setupUi

    void retranslateUi(QDialog *StartDialog)
    {
        StartDialog->setWindowTitle(QApplication::translate("StartDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        iconLabel->setText(QApplication::translate("StartDialog", "<html><head/><body><p><img src=\":/images/aeolus-logo.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        loginPushButton->setText(QApplication::translate("StartDialog", "Login", 0, QApplication::UnicodeUTF8));
        initialConfigurationPushButton->setText(QApplication::translate("StartDialog", "Initial Conifg", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StartDialog: public Ui_StartDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTDIALOG_H
