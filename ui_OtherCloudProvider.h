/********************************************************************************
** Form generated from reading UI file 'OtherCloudProvider.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERCLOUDPROVIDER_H
#define UI_OTHERCLOUDPROVIDER_H

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

class Ui_OtherCloudProvider
{
public:
    QLabel *accountNumberLabel;
    QLineEdit *accessKeyLineEdit;
    QLabel *secreteAccessKeyLabel;
    QLabel *accessKeyLabel;
    QLineEdit *keyLineEdit;
    QLabel *keyLabel;
    QPushButton *closePushButton;
    QLabel *selectedCloudTypeLabel;
    QPushButton *okPushButton;
    QLineEdit *certificateLineEdit;
    QLineEdit *accountNumberLineEdit;
    QLabel *cloudTypeLabel;
    QLabel *certificateLabel;
    QLineEdit *secretAccessKeyLineEdit;
    QLineEdit *priorityLineEdit;
    QLabel *priorityLabel;
    QLineEdit *qotaLineEdit;
    QLabel *qotaLabel;

    void setupUi(QDialog *OtherCloudProvider)
    {
        if (OtherCloudProvider->objectName().isEmpty())
            OtherCloudProvider->setObjectName(QString::fromUtf8("OtherCloudProvider"));
        OtherCloudProvider->resize(505, 421);
        OtherCloudProvider->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        accountNumberLabel = new QLabel(OtherCloudProvider);
        accountNumberLabel->setObjectName(QString::fromUtf8("accountNumberLabel"));
        accountNumberLabel->setGeometry(QRect(10, 150, 141, 20));
        accessKeyLineEdit = new QLineEdit(OtherCloudProvider);
        accessKeyLineEdit->setObjectName(QString::fromUtf8("accessKeyLineEdit"));
        accessKeyLineEdit->setGeometry(QRect(190, 60, 301, 31));
        secreteAccessKeyLabel = new QLabel(OtherCloudProvider);
        secreteAccessKeyLabel->setObjectName(QString::fromUtf8("secreteAccessKeyLabel"));
        secreteAccessKeyLabel->setGeometry(QRect(0, 110, 151, 21));
        accessKeyLabel = new QLabel(OtherCloudProvider);
        accessKeyLabel->setObjectName(QString::fromUtf8("accessKeyLabel"));
        accessKeyLabel->setGeometry(QRect(60, 70, 131, 20));
        keyLineEdit = new QLineEdit(OtherCloudProvider);
        keyLineEdit->setObjectName(QString::fromUtf8("keyLineEdit"));
        keyLineEdit->setGeometry(QRect(190, 180, 301, 31));
        keyLabel = new QLabel(OtherCloudProvider);
        keyLabel->setObjectName(QString::fromUtf8("keyLabel"));
        keyLabel->setGeometry(QRect(110, 190, 71, 20));
        closePushButton = new QPushButton(OtherCloudProvider);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));
        closePushButton->setGeometry(QRect(50, 360, 82, 25));
        selectedCloudTypeLabel = new QLabel(OtherCloudProvider);
        selectedCloudTypeLabel->setObjectName(QString::fromUtf8("selectedCloudTypeLabel"));
        selectedCloudTypeLabel->setGeometry(QRect(190, 30, 161, 16));
        okPushButton = new QPushButton(OtherCloudProvider);
        okPushButton->setObjectName(QString::fromUtf8("okPushButton"));
        okPushButton->setGeometry(QRect(380, 360, 82, 25));
        certificateLineEdit = new QLineEdit(OtherCloudProvider);
        certificateLineEdit->setObjectName(QString::fromUtf8("certificateLineEdit"));
        certificateLineEdit->setGeometry(QRect(190, 220, 301, 31));
        accountNumberLineEdit = new QLineEdit(OtherCloudProvider);
        accountNumberLineEdit->setObjectName(QString::fromUtf8("accountNumberLineEdit"));
        accountNumberLineEdit->setGeometry(QRect(190, 140, 301, 31));
        accountNumberLineEdit->setEchoMode(QLineEdit::Password);
        cloudTypeLabel = new QLabel(OtherCloudProvider);
        cloudTypeLabel->setObjectName(QString::fromUtf8("cloudTypeLabel"));
        cloudTypeLabel->setGeometry(QRect(60, 30, 101, 20));
        certificateLabel = new QLabel(OtherCloudProvider);
        certificateLabel->setObjectName(QString::fromUtf8("certificateLabel"));
        certificateLabel->setGeometry(QRect(50, 230, 91, 20));
        secretAccessKeyLineEdit = new QLineEdit(OtherCloudProvider);
        secretAccessKeyLineEdit->setObjectName(QString::fromUtf8("secretAccessKeyLineEdit"));
        secretAccessKeyLineEdit->setGeometry(QRect(190, 100, 301, 31));
        secretAccessKeyLineEdit->setEchoMode(QLineEdit::Password);
        priorityLineEdit = new QLineEdit(OtherCloudProvider);
        priorityLineEdit->setObjectName(QString::fromUtf8("priorityLineEdit"));
        priorityLineEdit->setGeometry(QRect(190, 260, 301, 31));
        priorityLabel = new QLabel(OtherCloudProvider);
        priorityLabel->setObjectName(QString::fromUtf8("priorityLabel"));
        priorityLabel->setGeometry(QRect(80, 270, 71, 20));
        qotaLineEdit = new QLineEdit(OtherCloudProvider);
        qotaLineEdit->setObjectName(QString::fromUtf8("qotaLineEdit"));
        qotaLineEdit->setGeometry(QRect(190, 300, 301, 31));
        qotaLabel = new QLabel(OtherCloudProvider);
        qotaLabel->setObjectName(QString::fromUtf8("qotaLabel"));
        qotaLabel->setGeometry(QRect(90, 310, 61, 21));

        retranslateUi(OtherCloudProvider);

        QMetaObject::connectSlotsByName(OtherCloudProvider);
    } // setupUi

    void retranslateUi(QDialog *OtherCloudProvider)
    {
        OtherCloudProvider->setWindowTitle(QApplication::translate("OtherCloudProvider", "Dialog", 0, QApplication::UnicodeUTF8));
        accountNumberLabel->setText(QApplication::translate("OtherCloudProvider", "Account Number", 0, QApplication::UnicodeUTF8));
        secreteAccessKeyLabel->setText(QApplication::translate("OtherCloudProvider", "Secret Access Key", 0, QApplication::UnicodeUTF8));
        accessKeyLabel->setText(QApplication::translate("OtherCloudProvider", "Access Key", 0, QApplication::UnicodeUTF8));
        keyLabel->setText(QApplication::translate("OtherCloudProvider", "Key", 0, QApplication::UnicodeUTF8));
        closePushButton->setText(QApplication::translate("OtherCloudProvider", "Close", 0, QApplication::UnicodeUTF8));
        selectedCloudTypeLabel->setText(QApplication::translate("OtherCloudProvider", "selectedLabel", 0, QApplication::UnicodeUTF8));
        okPushButton->setText(QApplication::translate("OtherCloudProvider", "OK", 0, QApplication::UnicodeUTF8));
        cloudTypeLabel->setText(QApplication::translate("OtherCloudProvider", "Cloud Type", 0, QApplication::UnicodeUTF8));
        certificateLabel->setText(QApplication::translate("OtherCloudProvider", "Certificate", 0, QApplication::UnicodeUTF8));
        priorityLabel->setText(QApplication::translate("OtherCloudProvider", "Priority", 0, QApplication::UnicodeUTF8));
        qotaLabel->setText(QApplication::translate("OtherCloudProvider", "Qota", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OtherCloudProvider: public Ui_OtherCloudProvider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERCLOUDPROVIDER_H
