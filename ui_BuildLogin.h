/********************************************************************************
** Form generated from reading UI file 'BuildLogin.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILDLOGIN_H
#define UI_BUILDLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BuildLogin
{
public:
    QLineEdit *passwordLineEdit;
    QLabel *sideLabel;
    QLineEdit *userNameLineEdit;
    QPushButton *submitPushButton;
    QLabel *passwordLabel;
    QLabel *userNameLabel;

    void setupUi(QDialog *BuildLogin)
    {
        if (BuildLogin->objectName().isEmpty())
            BuildLogin->setObjectName(QString::fromUtf8("BuildLogin"));
        BuildLogin->resize(442, 221);
        BuildLogin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        passwordLineEdit = new QLineEdit(BuildLogin);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(240, 70, 191, 31));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        sideLabel = new QLabel(BuildLogin);
        sideLabel->setObjectName(QString::fromUtf8("sideLabel"));
        sideLabel->setGeometry(QRect(-10, 0, 201, 211));
        userNameLineEdit = new QLineEdit(BuildLogin);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));
        userNameLineEdit->setGeometry(QRect(240, 20, 191, 31));
        submitPushButton = new QPushButton(BuildLogin);
        submitPushButton->setObjectName(QString::fromUtf8("submitPushButton"));
        submitPushButton->setGeometry(QRect(330, 180, 82, 25));
        passwordLabel = new QLabel(BuildLogin);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(140, 80, 81, 16));
        userNameLabel = new QLabel(BuildLogin);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setGeometry(QRect(140, 30, 91, 16));

        retranslateUi(BuildLogin);

        QMetaObject::connectSlotsByName(BuildLogin);
    } // setupUi

    void retranslateUi(QDialog *BuildLogin)
    {
        BuildLogin->setWindowTitle(QApplication::translate("BuildLogin", "Dialog", 0, QApplication::UnicodeUTF8));
        sideLabel->setText(QApplication::translate("BuildLogin", "<html><head/><body><p><img src=\":/images/aeolus-logo.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        submitPushButton->setText(QApplication::translate("BuildLogin", "Submit", 0, QApplication::UnicodeUTF8));
        passwordLabel->setText(QApplication::translate("BuildLogin", "Password", 0, QApplication::UnicodeUTF8));
        userNameLabel->setText(QApplication::translate("BuildLogin", "User Name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BuildLogin: public Ui_BuildLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILDLOGIN_H
