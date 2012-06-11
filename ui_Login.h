/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *userNameLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *loginPushButton;
    QPushButton *helpPushButton;
    QPushButton *lostPushButton;
    QCheckBox *showPasswordCheckBox;
    QLabel *userNameLabel;
    QLabel *passwordLabel;
    QLabel *sideLabel;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(402, 215);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/aeolus-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
        userNameLineEdit = new QLineEdit(Login);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));
        userNameLineEdit->setGeometry(QRect(200, 20, 191, 31));
        passwordLineEdit = new QLineEdit(Login);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(200, 70, 191, 31));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        loginPushButton = new QPushButton(Login);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        loginPushButton->setGeometry(QRect(300, 170, 91, 31));
        helpPushButton = new QPushButton(Login);
        helpPushButton->setObjectName(QString::fromUtf8("helpPushButton"));
        helpPushButton->setGeometry(QRect(111, 180, 20, 21));
        lostPushButton = new QPushButton(Login);
        lostPushButton->setObjectName(QString::fromUtf8("lostPushButton"));
        lostPushButton->setGeometry(QRect(130, 180, 21, 21));
        showPasswordCheckBox = new QCheckBox(Login);
        showPasswordCheckBox->setObjectName(QString::fromUtf8("showPasswordCheckBox"));
        showPasswordCheckBox->setGeometry(QRect(200, 110, 181, 31));
        userNameLabel = new QLabel(Login);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setGeometry(QRect(100, 30, 91, 16));
        passwordLabel = new QLabel(Login);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(100, 80, 81, 16));
        sideLabel = new QLabel(Login);
        sideLabel->setObjectName(QString::fromUtf8("sideLabel"));
        sideLabel->setGeometry(QRect(10, -60, 71, 261));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", 0, QApplication::UnicodeUTF8));
        loginPushButton->setText(QApplication::translate("Login", "Login", 0, QApplication::UnicodeUTF8));
        helpPushButton->setText(QApplication::translate("Login", "?", 0, QApplication::UnicodeUTF8));
        lostPushButton->setText(QApplication::translate("Login", "L", 0, QApplication::UnicodeUTF8));
        showPasswordCheckBox->setText(QApplication::translate("Login", "Show My Password", 0, QApplication::UnicodeUTF8));
        userNameLabel->setText(QApplication::translate("Login", "User Name", 0, QApplication::UnicodeUTF8));
        passwordLabel->setText(QApplication::translate("Login", "Password", 0, QApplication::UnicodeUTF8));
        sideLabel->setText(QApplication::translate("Login", "<html><head/><body><p><img src=\":/images/aeolus-logo60*60.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
