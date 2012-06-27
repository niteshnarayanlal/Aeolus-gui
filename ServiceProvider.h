#ifndef SERVICEPROVIDER_H
#define SERVICEPROVIDER_H
#include"ui_ServiceProvider.h"
#include"Login.h"
#include"EC2SSHConfigurer.h"
#include<QDialog>
#include<QMessageBox>

class ServiceProvider:public QDialog,Ui::CloudProviders
{
    Q_OBJECT
    QMessageBox messageBox;
    char ID[1000];
public:
    ServiceProvider();
    void connections();
    void pushDeployables();
    void downloadPem();
private slots:
    void pushImage();

};

#endif // SERVICEPROVIDER_H
