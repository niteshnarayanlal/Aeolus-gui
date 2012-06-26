#ifndef SERVICEPROVIDER_H
#define SERVICEPROVIDER_H
#include<QDialog>
#include"ui_ServiceProvider.h"
#include<QMessageBox>
//#include<QtNetwork/QNetworkAccessManager>
//#include<QtNetwork/QNetworkReply>
//#include<QtNetwork/QAuthenticator>

class ServiceProvider:public QDialog,Ui::CloudProviders
{
    Q_OBJECT
    QMessageBox messageBox;
    char ID[1000];
   // QNetworkAccessManager *manager;

public:

    ServiceProvider();
    void connections();
    void pushDeployables();
    void downloadPem();
private slots:
    void pushImage();
    //void replyFinished(QNetworkReply *);
    //void provideAuthenication(QNetworkReply *reply, QAuthenticator*authenticator);

};

#endif // SERVICEPROVIDER_H
