/********************************************************************************
** Form generated from reading UI file 'MockCloudProvider.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOCKCLOUDPROVIDER_H
#define UI_MOCKCLOUDPROVIDER_H

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

class Ui_MockCloudProvider
{
public:
    QLabel *passwordLabel;
    QLineEdit *priorityLineEdit;
    QLabel *priorityLabel;
    QLineEdit *accountNameLineEdit;
    QLabel *userNameLabel;
    QLabel *qotaLabel;
    QLabel *selectedCloudTypeLabel;
    QLabel *cloudTypeLabel;
    QLineEdit *qotaLineEdit;
    QLabel *accountNameLabel;
    QLineEdit *passwordLineEdit;
    QLineEdit *userNameLineEdit;
    QPushButton *okPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *MockCloudProvider)
    {
        if (MockCloudProvider->objectName().isEmpty())
            MockCloudProvider->setObjectName(QString::fromUtf8("MockCloudProvider"));
        MockCloudProvider->resize(501, 346);
        MockCloudProvider->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        passwordLabel = new QLabel(MockCloudProvider);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(40, 160, 101, 20));
        priorityLineEdit = new QLineEdit(MockCloudProvider);
        priorityLineEdit->setObjectName(QString::fromUtf8("priorityLineEdit"));
        priorityLineEdit->setGeometry(QRect(170, 190, 301, 31));
        priorityLabel = new QLabel(MockCloudProvider);
        priorityLabel->setObjectName(QString::fromUtf8("priorityLabel"));
        priorityLabel->setGeometry(QRect(60, 200, 71, 20));
        accountNameLineEdit = new QLineEdit(MockCloudProvider);
        accountNameLineEdit->setObjectName(QString::fromUtf8("accountNameLineEdit"));
        accountNameLineEdit->setGeometry(QRect(170, 70, 301, 31));
        userNameLabel = new QLabel(MockCloudProvider);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setGeometry(QRect(30, 120, 111, 21));
        qotaLabel = new QLabel(MockCloudProvider);
        qotaLabel->setObjectName(QString::fromUtf8("qotaLabel"));
        qotaLabel->setGeometry(QRect(70, 240, 61, 20));
        selectedCloudTypeLabel = new QLabel(MockCloudProvider);
        selectedCloudTypeLabel->setObjectName(QString::fromUtf8("selectedCloudTypeLabel"));
        selectedCloudTypeLabel->setGeometry(QRect(170, 40, 161, 16));
        cloudTypeLabel = new QLabel(MockCloudProvider);
        cloudTypeLabel->setObjectName(QString::fromUtf8("cloudTypeLabel"));
        cloudTypeLabel->setGeometry(QRect(30, 40, 101, 20));
        qotaLineEdit = new QLineEdit(MockCloudProvider);
        qotaLineEdit->setObjectName(QString::fromUtf8("qotaLineEdit"));
        qotaLineEdit->setGeometry(QRect(170, 230, 301, 31));
        accountNameLabel = new QLabel(MockCloudProvider);
        accountNameLabel->setObjectName(QString::fromUtf8("accountNameLabel"));
        accountNameLabel->setGeometry(QRect(10, 80, 131, 20));
        passwordLineEdit = new QLineEdit(MockCloudProvider);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(170, 150, 301, 31));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        userNameLineEdit = new QLineEdit(MockCloudProvider);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));
        userNameLineEdit->setGeometry(QRect(170, 110, 301, 31));
        okPushButton = new QPushButton(MockCloudProvider);
        okPushButton->setObjectName(QString::fromUtf8("okPushButton"));
        okPushButton->setGeometry(QRect(370, 290, 82, 25));
        closePushButton = new QPushButton(MockCloudProvider);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));
        closePushButton->setGeometry(QRect(19, 293, 82, 25));

        retranslateUi(MockCloudProvider);

        QMetaObject::connectSlotsByName(MockCloudProvider);
    } // setupUi

    void retranslateUi(QDialog *MockCloudProvider)
    {
        MockCloudProvider->setWindowTitle(QApplication::translate("MockCloudProvider", "Dialog", 0, QApplication::UnicodeUTF8));
        passwordLabel->setText(QApplication::translate("MockCloudProvider", "Password", 0, QApplication::UnicodeUTF8));
        priorityLabel->setText(QApplication::translate("MockCloudProvider", "Priority", 0, QApplication::UnicodeUTF8));
        userNameLabel->setText(QApplication::translate("MockCloudProvider", "User Name", 0, QApplication::UnicodeUTF8));
        qotaLabel->setText(QApplication::translate("MockCloudProvider", "Qota", 0, QApplication::UnicodeUTF8));
        selectedCloudTypeLabel->setText(QApplication::translate("MockCloudProvider", "selectedLabel", 0, QApplication::UnicodeUTF8));
        cloudTypeLabel->setText(QApplication::translate("MockCloudProvider", "Cloud Type", 0, QApplication::UnicodeUTF8));
        accountNameLabel->setText(QApplication::translate("MockCloudProvider", "Account Name", 0, QApplication::UnicodeUTF8));
        okPushButton->setText(QApplication::translate("MockCloudProvider", "OK", 0, QApplication::UnicodeUTF8));
        closePushButton->setText(QApplication::translate("MockCloudProvider", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MockCloudProvider: public Ui_MockCloudProvider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOCKCLOUDPROVIDER_H
