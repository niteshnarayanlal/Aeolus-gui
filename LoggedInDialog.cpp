#include"LoggedInDialog.h"
#include<QDebug>
LoggedInDialog::LoggedInDialog()
{
    setupUi(this);
    this->setWindowTitle("Aeolus");
    connections();
}
void LoggedInDialog::connections()
{
    connect(cloudProviderAccountSetupPushButton,SIGNAL(clicked()),this,SLOT(showCloudProviderAccountSetup()));
    connect(builderAndPusherPushButton,SIGNAL(clicked()),this,SLOT(showBuilderAndPusher()));
    connect(logOutPushButton,SIGNAL(clicked()),this,SLOT(logOut()));
}
void LoggedInDialog::showCloudProviderAccountSetup()
{

    CloudProviderAccountSetup *object=new CloudProviderAccountSetup;
    this->close();
    object->show();

}
void LoggedInDialog::showBuilderAndPusher()
{
    qDebug()<<"Is here";
    BuilderAndPusher *object=new BuilderAndPusher;
    this->close();
    object->show();
}
void LoggedInDialog::logOut()
{
    Login *object=new Login;
    this->close();
    object->show();
}
