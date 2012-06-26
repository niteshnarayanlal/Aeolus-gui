/********************************************************************************
** Form generated from reading UI file 'EC2SSHConfigurer.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EC2SSHCONFIGURER_H
#define UI_EC2SSHCONFIGURER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_EC2SSHConfigurer
{
public:
    QWebView *webView;
    QPushButton *okPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *EC2SSHConfigurer)
    {
        if (EC2SSHConfigurer->objectName().isEmpty())
            EC2SSHConfigurer->setObjectName(QString::fromUtf8("EC2SSHConfigurer"));
        EC2SSHConfigurer->resize(690, 572);
        EC2SSHConfigurer->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        webView = new QWebView(EC2SSHConfigurer);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(0, 0, 691, 531));
        webView->setProperty("url", QVariant(QUrl(QString::fromUtf8("about:blank"))));
        okPushButton = new QPushButton(EC2SSHConfigurer);
        okPushButton->setObjectName(QString::fromUtf8("okPushButton"));
        okPushButton->setGeometry(QRect(580, 540, 82, 25));
        closePushButton = new QPushButton(EC2SSHConfigurer);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));
        closePushButton->setGeometry(QRect(0, 540, 82, 25));

        retranslateUi(EC2SSHConfigurer);

        QMetaObject::connectSlotsByName(EC2SSHConfigurer);
    } // setupUi

    void retranslateUi(QDialog *EC2SSHConfigurer)
    {
        EC2SSHConfigurer->setWindowTitle(QApplication::translate("EC2SSHConfigurer", "Dialog", 0, QApplication::UnicodeUTF8));
        okPushButton->setText(QApplication::translate("EC2SSHConfigurer", "OK", 0, QApplication::UnicodeUTF8));
        closePushButton->setText(QApplication::translate("EC2SSHConfigurer", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EC2SSHConfigurer: public Ui_EC2SSHConfigurer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EC2SSHCONFIGURER_H
