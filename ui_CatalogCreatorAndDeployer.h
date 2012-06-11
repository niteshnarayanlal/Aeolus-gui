/********************************************************************************
** Form generated from reading UI file 'CatalogCreatorAndDeployer.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATALOGCREATORANDDEPLOYER_H
#define UI_CATALOGCREATORANDDEPLOYER_H

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

class Ui_CatalogCreatorAndDeployer
{
public:
    QPushButton *backPushButton;
    QLabel *descriptionLabel;
    QLabel *catalogNameLabel;
    QPushButton *submitPushButton;
    QLineEdit *osNameLineEdit;
    QLineEdit *descriptionLineEdit;

    void setupUi(QDialog *CatalogCreatorAndDeployer)
    {
        if (CatalogCreatorAndDeployer->objectName().isEmpty())
            CatalogCreatorAndDeployer->setObjectName(QString::fromUtf8("CatalogCreatorAndDeployer"));
        CatalogCreatorAndDeployer->resize(461, 306);
        CatalogCreatorAndDeployer->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
        backPushButton = new QPushButton(CatalogCreatorAndDeployer);
        backPushButton->setObjectName(QString::fromUtf8("backPushButton"));
        backPushButton->setGeometry(QRect(30, 240, 101, 31));
        descriptionLabel = new QLabel(CatalogCreatorAndDeployer);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(30, 100, 111, 20));
        catalogNameLabel = new QLabel(CatalogCreatorAndDeployer);
        catalogNameLabel->setObjectName(QString::fromUtf8("catalogNameLabel"));
        catalogNameLabel->setGeometry(QRect(10, 40, 131, 20));
        submitPushButton = new QPushButton(CatalogCreatorAndDeployer);
        submitPushButton->setObjectName(QString::fromUtf8("submitPushButton"));
        submitPushButton->setGeometry(QRect(340, 240, 101, 31));
        osNameLineEdit = new QLineEdit(CatalogCreatorAndDeployer);
        osNameLineEdit->setObjectName(QString::fromUtf8("osNameLineEdit"));
        osNameLineEdit->setGeometry(QRect(170, 30, 271, 31));
        descriptionLineEdit = new QLineEdit(CatalogCreatorAndDeployer);
        descriptionLineEdit->setObjectName(QString::fromUtf8("descriptionLineEdit"));
        descriptionLineEdit->setGeometry(QRect(170, 90, 271, 101));

        retranslateUi(CatalogCreatorAndDeployer);

        QMetaObject::connectSlotsByName(CatalogCreatorAndDeployer);
    } // setupUi

    void retranslateUi(QDialog *CatalogCreatorAndDeployer)
    {
        CatalogCreatorAndDeployer->setWindowTitle(QApplication::translate("CatalogCreatorAndDeployer", "Dialog", 0, QApplication::UnicodeUTF8));
        backPushButton->setText(QApplication::translate("CatalogCreatorAndDeployer", "Back", 0, QApplication::UnicodeUTF8));
        descriptionLabel->setText(QApplication::translate("CatalogCreatorAndDeployer", "Description", 0, QApplication::UnicodeUTF8));
        catalogNameLabel->setText(QApplication::translate("CatalogCreatorAndDeployer", "Catalog Name", 0, QApplication::UnicodeUTF8));
        submitPushButton->setText(QApplication::translate("CatalogCreatorAndDeployer", "Submit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        osNameLineEdit->setToolTip(QApplication::translate("CatalogCreatorAndDeployer", "<html><head/><body><p>currently we are supporting only Fedora </p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        descriptionLineEdit->setToolTip(QApplication::translate("CatalogCreatorAndDeployer", "Enter your decription", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CatalogCreatorAndDeployer: public Ui_CatalogCreatorAndDeployer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATALOGCREATORANDDEPLOYER_H
