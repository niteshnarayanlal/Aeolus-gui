/********************************************************************************
** Form generated from reading UI file 'CloudProviderAccountSetup.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOUDPROVIDERACCOUNTSETUP_H
#define UI_CLOUDPROVIDERACCOUNTSETUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CloudProviderAccountSetup
{
public:
    QLabel *cloudProviderLabel;
    QPushButton *nextPushButton;
    QComboBox *cloudProviderComboBox;

    void setupUi(QDialog *CloudProviderAccountSetup)
    {
        if (CloudProviderAccountSetup->objectName().isEmpty())
            CloudProviderAccountSetup->setObjectName(QString::fromUtf8("CloudProviderAccountSetup"));
        CloudProviderAccountSetup->resize(568, 100);
        CloudProviderAccountSetup->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        cloudProviderLabel = new QLabel(CloudProviderAccountSetup);
        cloudProviderLabel->setObjectName(QString::fromUtf8("cloudProviderLabel"));
        cloudProviderLabel->setGeometry(QRect(10, 30, 231, 21));
        nextPushButton = new QPushButton(CloudProviderAccountSetup);
        nextPushButton->setObjectName(QString::fromUtf8("nextPushButton"));
        nextPushButton->setGeometry(QRect(450, 70, 82, 25));
        cloudProviderComboBox = new QComboBox(CloudProviderAccountSetup);
        cloudProviderComboBox->setObjectName(QString::fromUtf8("cloudProviderComboBox"));
        cloudProviderComboBox->setGeometry(QRect(250, 20, 301, 31));

        retranslateUi(CloudProviderAccountSetup);

        QMetaObject::connectSlotsByName(CloudProviderAccountSetup);
    } // setupUi

    void retranslateUi(QDialog *CloudProviderAccountSetup)
    {
        CloudProviderAccountSetup->setWindowTitle(QApplication::translate("CloudProviderAccountSetup", "Dialog", 0, QApplication::UnicodeUTF8));
        cloudProviderLabel->setText(QApplication::translate("CloudProviderAccountSetup", "Select Your Cloud Provider", 0, QApplication::UnicodeUTF8));
        nextPushButton->setText(QApplication::translate("CloudProviderAccountSetup", "Next", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CloudProviderAccountSetup: public Ui_CloudProviderAccountSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOUDPROVIDERACCOUNTSETUP_H
