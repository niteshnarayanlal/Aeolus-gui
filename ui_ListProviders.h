/********************************************************************************
** Form generated from reading UI file 'ListProviders.ui'
**
** Created by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTPROVIDERS_H
#define UI_LISTPROVIDERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ListProviders
{
public:
    QLabel *providersListLabel;
    QPushButton *okPushButton;

    void setupUi(QDialog *ListProviders)
    {
        if (ListProviders->objectName().isEmpty())
            ListProviders->setObjectName(QString::fromUtf8("ListProviders"));
        ListProviders->resize(400, 300);
        ListProviders->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        providersListLabel = new QLabel(ListProviders);
        providersListLabel->setObjectName(QString::fromUtf8("providersListLabel"));
        providersListLabel->setGeometry(QRect(20, 20, 361, 231));
        okPushButton = new QPushButton(ListProviders);
        okPushButton->setObjectName(QString::fromUtf8("okPushButton"));
        okPushButton->setGeometry(QRect(170, 270, 82, 25));

        retranslateUi(ListProviders);

        QMetaObject::connectSlotsByName(ListProviders);
    } // setupUi

    void retranslateUi(QDialog *ListProviders)
    {
        ListProviders->setWindowTitle(QApplication::translate("ListProviders", "Dialog", 0, QApplication::UnicodeUTF8));
        providersListLabel->setText(QString());
        okPushButton->setText(QApplication::translate("ListProviders", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ListProviders: public Ui_ListProviders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTPROVIDERS_H
