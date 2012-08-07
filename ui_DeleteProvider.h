/********************************************************************************
** Form generated from reading UI file 'DeleteProvider.ui'
**
** Created by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPROVIDER_H
#define UI_DELETEPROVIDER_H

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

class Ui_Dialog
{
public:
    QLabel *cloudProviderLabel;
    QComboBox *cloudProviderComboBox;
    QPushButton *deletePushButton;
    QPushButton *backPushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(405, 132);
        Dialog->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        cloudProviderLabel = new QLabel(Dialog);
        cloudProviderLabel->setObjectName(QString::fromUtf8("cloudProviderLabel"));
        cloudProviderLabel->setGeometry(QRect(10, 20, 231, 21));
        cloudProviderComboBox = new QComboBox(Dialog);
        cloudProviderComboBox->setObjectName(QString::fromUtf8("cloudProviderComboBox"));
        cloudProviderComboBox->setGeometry(QRect(110, 20, 281, 31));
        deletePushButton = new QPushButton(Dialog);
        deletePushButton->setObjectName(QString::fromUtf8("deletePushButton"));
        deletePushButton->setGeometry(QRect(310, 80, 82, 25));
        backPushButton = new QPushButton(Dialog);
        backPushButton->setObjectName(QString::fromUtf8("backPushButton"));
        backPushButton->setGeometry(QRect(10, 80, 82, 25));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        cloudProviderLabel->setText(QApplication::translate("Dialog", "Cloud Provider", 0, QApplication::UnicodeUTF8));
        deletePushButton->setText(QApplication::translate("Dialog", "Delete", 0, QApplication::UnicodeUTF8));
        backPushButton->setText(QApplication::translate("Dialog", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPROVIDER_H
