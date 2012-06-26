#ifndef LOGIN_H
#define LOGIN_H
#include <QDialog>
#include "ui_Login.h"
#include<QMessageBox>
class Login:public QDialog,public Ui::Login
{
Q_OBJECT

    //QNetworkAccessManager manager;
    // QNetworkRequest  request ;
    // QNetworkReply *reply;
    QMessageBox message;
    //QNetworkAccessManager *manager;

public:
    Login();
    void connections();
    QString userName;
    QString password;
private slots:
      void authenticate();
      void checkBoxImplementation();
     //  void provideAuthenication(QNetworkReply *reply, QAuthenticator *ator);
     //  void replyFinished(QNetworkReply *);
     //  void onError(QNetworkReply::NetworkError);
};
#endif // LOGIN_H
