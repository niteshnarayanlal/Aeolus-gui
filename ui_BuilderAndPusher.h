/********************************************************************************
** Form generated from reading UI file 'BuilderAndPusher.ui'
**
** Created by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILDERANDPUSHER_H
#define UI_BUILDERANDPUSHER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_BuilderAndPusher
{
public:
    QLineEdit *osNameLineEdit;
    QLabel *osNameLabel;
    QLabel *versionLabel;
    QLineEdit *versionLineEdit;
    QLabel *rootPasswordLabel;
    QLineEdit *rootPasswordLineEdit;
    QLabel *descriptionLabel;
    QLineEdit *descriptionLineEdit;
    QPushButton *backPushButton;
    QPushButton *submitPushButton;
    QLabel *label;
    QRadioButton *x86_64RadioButton;
    QRadioButton *i386RadioButton;

    void setupUi(QDialog *BuilderAndPusher)
    {
        if (BuilderAndPusher->objectName().isEmpty())
            BuilderAndPusher->setObjectName(QString::fromUtf8("BuilderAndPusher"));
        BuilderAndPusher->resize(474, 427);
        BuilderAndPusher->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        osNameLineEdit = new QLineEdit(BuilderAndPusher);
        osNameLineEdit->setObjectName(QString::fromUtf8("osNameLineEdit"));
        osNameLineEdit->setGeometry(QRect(190, 30, 271, 31));
        osNameLabel = new QLabel(BuilderAndPusher);
        osNameLabel->setObjectName(QString::fromUtf8("osNameLabel"));
        osNameLabel->setGeometry(QRect(50, 40, 90, 20));
        versionLabel = new QLabel(BuilderAndPusher);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setGeometry(QRect(70, 160, 61, 16));
        versionLineEdit = new QLineEdit(BuilderAndPusher);
        versionLineEdit->setObjectName(QString::fromUtf8("versionLineEdit"));
        versionLineEdit->setGeometry(QRect(190, 150, 271, 31));
        rootPasswordLabel = new QLabel(BuilderAndPusher);
        rootPasswordLabel->setObjectName(QString::fromUtf8("rootPasswordLabel"));
        rootPasswordLabel->setGeometry(QRect(10, 220, 131, 20));
        rootPasswordLineEdit = new QLineEdit(BuilderAndPusher);
        rootPasswordLineEdit->setObjectName(QString::fromUtf8("rootPasswordLineEdit"));
        rootPasswordLineEdit->setGeometry(QRect(190, 210, 271, 31));
        rootPasswordLineEdit->setEchoMode(QLineEdit::Password);
        descriptionLabel = new QLabel(BuilderAndPusher);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(40, 280, 111, 20));
        descriptionLineEdit = new QLineEdit(BuilderAndPusher);
        descriptionLineEdit->setObjectName(QString::fromUtf8("descriptionLineEdit"));
        descriptionLineEdit->setGeometry(QRect(190, 270, 271, 101));
        backPushButton = new QPushButton(BuilderAndPusher);
        backPushButton->setObjectName(QString::fromUtf8("backPushButton"));
        backPushButton->setGeometry(QRect(49, 393, 82, 25));
        submitPushButton = new QPushButton(BuilderAndPusher);
        submitPushButton->setObjectName(QString::fromUtf8("submitPushButton"));
        submitPushButton->setGeometry(QRect(380, 390, 82, 25));
        label = new QLabel(BuilderAndPusher);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 100, 101, 20));
        x86_64RadioButton = new QRadioButton(BuilderAndPusher);
        x86_64RadioButton->setObjectName(QString::fromUtf8("x86_64RadioButton"));
        x86_64RadioButton->setGeometry(QRect(200, 100, 103, 21));
        i386RadioButton = new QRadioButton(BuilderAndPusher);
        i386RadioButton->setObjectName(QString::fromUtf8("i386RadioButton"));
        i386RadioButton->setGeometry(QRect(340, 100, 103, 21));

        retranslateUi(BuilderAndPusher);

        QMetaObject::connectSlotsByName(BuilderAndPusher);
    } // setupUi

    void retranslateUi(QDialog *BuilderAndPusher)
    {
        BuilderAndPusher->setWindowTitle(QApplication::translate("BuilderAndPusher", "Dialog", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BuilderAndPusher->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        osNameLineEdit->setToolTip(QApplication::translate("BuilderAndPusher", "<html><head/><body><p>currently we are supporting only Fedora </p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        osNameLineEdit->setStatusTip(QApplication::translate("BuilderAndPusher", "Right now we only support Fedora", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        osNameLabel->setText(QApplication::translate("BuilderAndPusher", "OS Name", 0, QApplication::UnicodeUTF8));
        versionLabel->setText(QApplication::translate("BuilderAndPusher", "Version", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        versionLineEdit->setStatusTip(QApplication::translate("BuilderAndPusher", "Enter the Version such that whether you want it for Fedora 16 or 17 or so on ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        rootPasswordLabel->setText(QApplication::translate("BuilderAndPusher", "Root Password", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        rootPasswordLineEdit->setStatusTip(QApplication::translate("BuilderAndPusher", "Enter your system root password", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        descriptionLabel->setText(QApplication::translate("BuilderAndPusher", "Description", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        descriptionLineEdit->setToolTip(QApplication::translate("BuilderAndPusher", "Enter your decription", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        backPushButton->setText(QApplication::translate("BuilderAndPusher", "Back", 0, QApplication::UnicodeUTF8));
        submitPushButton->setText(QApplication::translate("BuilderAndPusher", "Submit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BuilderAndPusher", "Architecture", 0, QApplication::UnicodeUTF8));
        x86_64RadioButton->setText(QApplication::translate("BuilderAndPusher", "x86_64", 0, QApplication::UnicodeUTF8));
        i386RadioButton->setText(QApplication::translate("BuilderAndPusher", "i386", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BuilderAndPusher: public Ui_BuilderAndPusher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILDERANDPUSHER_H
