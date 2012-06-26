#include"BuildLogin.h"
#include<QFile>
#include<QTextStream>
#include<ServiceProvider.h>
BuildLogin::BuildLogin()
{
    setupUi(this);
    connections();
    this->setWindowTitle("Build Login");

}
void BuildLogin::connections()
{
    connect(submitPushButton,SIGNAL(clicked()),this,SLOT(submit()));
}
void BuildLogin::submit()
{
QString userName=userNameLineEdit->text();
QString password=passwordLineEdit->text();

QFile file(".aeouls-cli");
file.open(QIODevice::Text | QIODevice::ReadWrite);
QTextStream out(&file);
QString fileContent="# Below is the correct format for this file, please update any older version you may have \n :conductor: \n :url: https://localhost/conductor/api \n :username:"+ userName+" \n :password:"+ password;
out << fileContent;
system("cp .aeouls-cli ~/");
this->close();
file.close();
//now we will execute the final command
ServiceProvider *src=new ServiceProvider;
src->show();
}
