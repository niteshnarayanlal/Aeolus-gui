/********************************************************************************
** Form generated from reading UI file 'LoggedInDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGGEDINDIALOG_H
#define UI_LOGGEDINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoggedInDialog
{
public:
    QPushButton *builderAndPusherPushButton;
    QPushButton *cloudProviderAccountSetupPushButton;
    QLabel *iconLabel;
    QPushButton *logOutPushButton;

    void setupUi(QDialog *LoggedInDialog)
    {
        if (LoggedInDialog->objectName().isEmpty())
            LoggedInDialog->setObjectName(QString::fromUtf8("LoggedInDialog"));
        LoggedInDialog->resize(411, 336);
        LoggedInDialog->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
"min-width: 100px;\n"
"max-width:100px;\n"
"min-height: 20px;\n"
"max-height: 20px;\n"
"}"));
        builderAndPusherPushButton = new QPushButton(LoggedInDialog);
        builderAndPusherPushButton->setObjectName(QString::fromUtf8("builderAndPusherPushButton"));
        builderAndPusherPushButton->setGeometry(QRect(150, 260, 112, 28));
        cloudProviderAccountSetupPushButton = new QPushButton(LoggedInDialog);
        cloudProviderAccountSetupPushButton->setObjectName(QString::fromUtf8("cloudProviderAccountSetupPushButton"));
        cloudProviderAccountSetupPushButton->setGeometry(QRect(150, 220, 112, 28));
        iconLabel = new QLabel(LoggedInDialog);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setGeometry(QRect(100, 10, 231, 211));
        logOutPushButton = new QPushButton(LoggedInDialog);
        logOutPushButton->setObjectName(QString::fromUtf8("logOutPushButton"));
        logOutPushButton->setGeometry(QRect(150, 300, 112, 28));

        retranslateUi(LoggedInDialog);

        QMetaObject::connectSlotsByName(LoggedInDialog);
    } // setupUi

    void retranslateUi(QDialog *LoggedInDialog)
    {
        LoggedInDialog->setWindowTitle(QApplication::translate("LoggedInDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        builderAndPusherPushButton->setText(QApplication::translate("LoggedInDialog", "Image Manager", 0, QApplication::UnicodeUTF8));
        cloudProviderAccountSetupPushButton->setText(QApplication::translate("LoggedInDialog", "Cloud Provider", 0, QApplication::UnicodeUTF8));
        iconLabel->setText(QApplication::translate("LoggedInDialog", "<html><head/><body><p><img src=\":/images/aeolus-logo.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        logOutPushButton->setText(QApplication::translate("LoggedInDialog", "LogOut", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoggedInDialog: public Ui_LoggedInDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGGEDINDIALOG_H
