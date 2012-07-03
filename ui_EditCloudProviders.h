/********************************************************************************
** Form generated from reading UI file 'EditCloudProviders.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCLOUDPROVIDERS_H
#define UI_EDITCLOUDPROVIDERS_H

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

class Ui_EditCloudProviders
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
    QLabel *selectProviderLabel;
    QComboBox *cloudProviderNameComboBox;

    void setupUi(QDialog *EditCloudProviders)
    {
        if (EditCloudProviders->objectName().isEmpty())
            EditCloudProviders->setObjectName(QString::fromUtf8("EditCloudProviders"));
        EditCloudProviders->resize(417, 262);
        EditCloudProviders->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        providerNameLabel = new QLabel(EditCloudProviders);
        providerNameLabel->setObjectName(QString::fromUtf8("providerNameLabel"));
        providerNameLabel->setGeometry(QRect(10, 70, 131, 16));
        providerURLLabel = new QLabel(EditCloudProviders);
        providerURLLabel->setObjectName(QString::fromUtf8("providerURLLabel"));
        providerURLLabel->setGeometry(QRect(10, 110, 131, 16));
        providerTypeLabel = new QLabel(EditCloudProviders);
        providerTypeLabel->setObjectName(QString::fromUtf8("providerTypeLabel"));
        providerTypeLabel->setGeometry(QRect(10, 150, 131, 16));
        xDeltaCloudProviderLabel = new QLabel(EditCloudProviders);
        xDeltaCloudProviderLabel->setObjectName(QString::fromUtf8("xDeltaCloudProviderLabel"));
        xDeltaCloudProviderLabel->setGeometry(QRect(10, 190, 161, 16));
        cloudProviderTypeComboBox = new QComboBox(EditCloudProviders);
        cloudProviderTypeComboBox->setObjectName(QString::fromUtf8("cloudProviderTypeComboBox"));
        cloudProviderTypeComboBox->setGeometry(QRect(150, 140, 241, 31));
        savePushButton = new QPushButton(EditCloudProviders);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));
        savePushButton->setGeometry(QRect(310, 220, 82, 25));
        backPushButton = new QPushButton(EditCloudProviders);
        backPushButton->setObjectName(QString::fromUtf8("backPushButton"));
        backPushButton->setGeometry(QRect(10, 220, 82, 25));
        providerNameLineEdit = new QLineEdit(EditCloudProviders);
        providerNameLineEdit->setObjectName(QString::fromUtf8("providerNameLineEdit"));
        providerNameLineEdit->setGeometry(QRect(150, 60, 241, 31));
        providerURLLineEdit = new QLineEdit(EditCloudProviders);
        providerURLLineEdit->setObjectName(QString::fromUtf8("providerURLLineEdit"));
        providerURLLineEdit->setGeometry(QRect(150, 100, 241, 31));
        xDeltaCloudProviderLineEdit = new QLineEdit(EditCloudProviders);
        xDeltaCloudProviderLineEdit->setObjectName(QString::fromUtf8("xDeltaCloudProviderLineEdit"));
        xDeltaCloudProviderLineEdit->setGeometry(QRect(150, 180, 241, 31));
        selectProviderLabel = new QLabel(EditCloudProviders);
        selectProviderLabel->setObjectName(QString::fromUtf8("selectProviderLabel"));
        selectProviderLabel->setGeometry(QRect(10, 30, 131, 16));
        cloudProviderNameComboBox = new QComboBox(EditCloudProviders);
        cloudProviderNameComboBox->setObjectName(QString::fromUtf8("cloudProviderNameComboBox"));
        cloudProviderNameComboBox->setGeometry(QRect(150, 20, 241, 31));

        retranslateUi(EditCloudProviders);

        QMetaObject::connectSlotsByName(EditCloudProviders);
    } // setupUi

    void retranslateUi(QDialog *EditCloudProviders)
    {
        EditCloudProviders->setWindowTitle(QApplication::translate("EditCloudProviders", "Dialog", 0, QApplication::UnicodeUTF8));
        providerNameLabel->setText(QApplication::translate("EditCloudProviders", "Provider Name", 0, QApplication::UnicodeUTF8));
        providerURLLabel->setText(QApplication::translate("EditCloudProviders", "Provider URL", 0, QApplication::UnicodeUTF8));
        providerTypeLabel->setText(QApplication::translate("EditCloudProviders", "Provider Type", 0, QApplication::UnicodeUTF8));
        xDeltaCloudProviderLabel->setText(QApplication::translate("EditCloudProviders", "X-Deltacloud-Provider", 0, QApplication::UnicodeUTF8));
        savePushButton->setText(QApplication::translate("EditCloudProviders", "Save", 0, QApplication::UnicodeUTF8));
        backPushButton->setText(QApplication::translate("EditCloudProviders", "Back", 0, QApplication::UnicodeUTF8));
        selectProviderLabel->setText(QApplication::translate("EditCloudProviders", "Select Provider ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditCloudProviders: public Ui_EditCloudProviders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCLOUDPROVIDERS_H
