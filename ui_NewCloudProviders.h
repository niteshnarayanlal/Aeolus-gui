/********************************************************************************
** Form generated from reading UI file 'NewCloudProviders.ui'
**
** Created by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCLOUDPROVIDERS_H
#define UI_NEWCLOUDPROVIDERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NewCloudProviders
{
public:
    QLabel *providerNameLabel;
    QLabel *providerURLLabel;
    QLabel *providerTypeLabel;
    QLabel *xDeltaCloudProviderLabel;
    QComboBox *cloudProviderTypeComboBox;
    QPushButton *savePushButton;
    QPushButton *backPushButton;
    QLineEdit *providerNameLineEdit;
    QLineEdit *providerURLLineEdit;
    QLineEdit *xDeltaCloudProviderLineEdit;

    void setupUi(QDialog *NewCloudProviders)
    {
        if (NewCloudProviders->objectName().isEmpty())
            NewCloudProviders->setObjectName(QString::fromUtf8("NewCloudProviders"));
        NewCloudProviders->resize(411, 234);
        NewCloudProviders->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        providerNameLabel = new QLabel(NewCloudProviders);
        providerNameLabel->setObjectName(QString::fromUtf8("providerNameLabel"));
        providerNameLabel->setGeometry(QRect(10, 30, 131, 16));
        providerURLLabel = new QLabel(NewCloudProviders);
        providerURLLabel->setObjectName(QString::fromUtf8("providerURLLabel"));
        providerURLLabel->setGeometry(QRect(10, 70, 131, 16));
        providerTypeLabel = new QLabel(NewCloudProviders);
        providerTypeLabel->setObjectName(QString::fromUtf8("providerTypeLabel"));
        providerTypeLabel->setGeometry(QRect(10, 110, 131, 16));
        xDeltaCloudProviderLabel = new QLabel(NewCloudProviders);
        xDeltaCloudProviderLabel->setObjectName(QString::fromUtf8("xDeltaCloudProviderLabel"));
        xDeltaCloudProviderLabel->setGeometry(QRect(10, 150, 161, 16));
        cloudProviderTypeComboBox = new QComboBox(NewCloudProviders);
        cloudProviderTypeComboBox->setObjectName(QString::fromUtf8("cloudProviderTypeComboBox"));
        cloudProviderTypeComboBox->setGeometry(QRect(150, 100, 241, 31));
        savePushButton = new QPushButton(NewCloudProviders);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));
        savePushButton->setGeometry(QRect(310, 180, 82, 25));
        backPushButton = new QPushButton(NewCloudProviders);
        backPushButton->setObjectName(QString::fromUtf8("backPushButton"));
        backPushButton->setGeometry(QRect(10, 180, 82, 25));
        providerNameLineEdit = new QLineEdit(NewCloudProviders);
        providerNameLineEdit->setObjectName(QString::fromUtf8("providerNameLineEdit"));
        providerNameLineEdit->setGeometry(QRect(150, 20, 241, 31));
        providerURLLineEdit = new QLineEdit(NewCloudProviders);
        providerURLLineEdit->setObjectName(QString::fromUtf8("providerURLLineEdit"));
        providerURLLineEdit->setGeometry(QRect(150, 60, 241, 31));
        xDeltaCloudProviderLineEdit = new QLineEdit(NewCloudProviders);
        xDeltaCloudProviderLineEdit->setObjectName(QString::fromUtf8("xDeltaCloudProviderLineEdit"));
        xDeltaCloudProviderLineEdit->setGeometry(QRect(150, 140, 241, 31));

        retranslateUi(NewCloudProviders);

        QMetaObject::connectSlotsByName(NewCloudProviders);
    } // setupUi

    void retranslateUi(QDialog *NewCloudProviders)
    {
        NewCloudProviders->setWindowTitle(QApplication::translate("NewCloudProviders", "Dialog", 0, QApplication::UnicodeUTF8));
        providerNameLabel->setText(QApplication::translate("NewCloudProviders", "Provider Name", 0, QApplication::UnicodeUTF8));
        providerURLLabel->setText(QApplication::translate("NewCloudProviders", "Provider URL", 0, QApplication::UnicodeUTF8));
        providerTypeLabel->setText(QApplication::translate("NewCloudProviders", "Provider Type", 0, QApplication::UnicodeUTF8));
        xDeltaCloudProviderLabel->setText(QApplication::translate("NewCloudProviders", "X-Deltacloud-Provider", 0, QApplication::UnicodeUTF8));
        savePushButton->setText(QApplication::translate("NewCloudProviders", "Save", 0, QApplication::UnicodeUTF8));
        backPushButton->setText(QApplication::translate("NewCloudProviders", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewCloudProviders: public Ui_NewCloudProviders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCLOUDPROVIDERS_H
