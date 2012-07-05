#include"NewCloudProviders.h"
#include<QDebug>
NewCloudProviders::NewCloudProviders()
{
    setupUi(this);
    cloudProviderTypeComboBox->addItem("Mock");
    cloudProviderTypeComboBox->addItem("Amazon EC2");
    cloudProviderTypeComboBox->addItem("GoGrid");
    cloudProviderTypeComboBox->addItem("Rackspace");
    cloudProviderTypeComboBox->addItem("RHEV-M");
    cloudProviderTypeComboBox->addItem("OpenNebula");
    cloudProviderTypeComboBox->addItem("Condor Cloud");
    cloudProviderTypeComboBox->addItem("VMware vSphere");
    providerURLLineEdit->setText("http://localhost:3002/api");
    connections();

}
void NewCloudProviders::connections()
{
    connect(savePushButton,SIGNAL(clicked()),this,SLOT(save()));
    connect(backPushButton,SIGNAL(clicked()),this,SLOT(back()));

}
void NewCloudProviders::save()
{
QString providerName=providerNameLineEdit->text();
QString deltaCloudProvider=xDeltaCloudProviderLineEdit->text();
QString providerurl=providerURLLineEdit->text();
Login *object=new Login;
QString command="curl -k --user "+object->returnUserName()+":"+object->returnPassword()+" --data \"provider[name]="+providerName+"\" --data  \"provider[deltacloud_provider]="+deltaCloudProvider+"\" --data-urlencode \"provider[url]="+providerurl+"\" https://localhost/conductor/providers";
qDebug()<<command;
QByteArray commandBA = command.toLocal8Bit();
const char *commandC = commandBA.data();
system(commandC);
messageBox->setText("Sucessful");
messageBox->show();
}
void NewCloudProviders::back()
{
CloudProviderAccountSetup *object=new CloudProviderAccountSetup;
this->close();
object->show();
}
