/********************************************************************************
** Form generated from reading UI file 'ServiceProvider.ui'
**
** Created by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICEPROVIDER_H
#define UI_SERVICEPROVIDER_H

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

class Ui_CloudProviders
{
public:
    QPushButton *okPushButton;
    QLineEdit *accountNameLineEdit;
    QLabel *accountNameLabel;

    void setupUi(QDialog *CloudProviders)
    {
        if (CloudProviders->objectName().isEmpty())
            CloudProviders->setObjectName(QString::fromUtf8("CloudProviders"));
        CloudProviders->resize(232, 153);
        CloudProviders->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        okPushButton = new QPushButton(CloudProviders);
        okPushButton->setObjectName(QString::fromUtf8("okPushButton"));
        okPushButton->setGeometry(QRect(70, 100, 82, 25));
        accountNameLineEdit = new QLineEdit(CloudProviders);
        accountNameLineEdit->setObjectName(QString::fromUtf8("accountNameLineEdit"));
        accountNameLineEdit->setGeometry(QRect(20, 50, 201, 31));
        accountNameLabel = new QLabel(CloudProviders);
        accountNameLabel->setObjectName(QString::fromUtf8("accountNameLabel"));
        accountNameLabel->setGeometry(QRect(10, 10, 241, 41));

        retranslateUi(CloudProviders);

        QMetaObject::connectSlotsByName(CloudProviders);
    } // setupUi

    void retranslateUi(QDialog *CloudProviders)
    {
        CloudProviders->setWindowTitle(QApplication::translate("CloudProviders", "Dialog", 0, QApplication::UnicodeUTF8));
        okPushButton->setText(QApplication::translate("CloudProviders", "Ok", 0, QApplication::UnicodeUTF8));
        accountNameLabel->setText(QApplication::translate("CloudProviders", "Enter your Account Name ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CloudProviders: public Ui_CloudProviders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICEPROVIDER_H
