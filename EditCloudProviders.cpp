#include"EditCloudProviders.h"
#include"Login.h"
#include<QDebug>
EditCloudProviders::EditCloudProviders()
{
    setupUi(this);

    cloudProviderNameComboBox->addItem("ec2-ap-northeast-1");
    cloudProviderNameComboBox->addItem("ec2-us-east-1");
    cloudProviderNameComboBox->addItem("ec2-ap-southeast-1");
    cloudProviderNameComboBox->addItem("ec2-us-west-2");
    cloudProviderNameComboBox->addItem("ec2-eu-west-1");
    cloudProviderNameComboBox->addItem("ec2-us-west-1");
    cloudProviderNameComboBox->addItem("mock");


    cloudProviderTypeComboBox->addItem("Mock");
    cloudProviderTypeComboBox->addItem("Amazon EC2");
    cloudProviderTypeComboBox->addItem("GoGrid");
    cloudProviderTypeComboBox->addItem("Rackspace");
    cloudProviderTypeComboBox->addItem("RHEV-M");
    cloudProviderTypeComboBox->addItem("OpenNebula");
    cloudProviderTypeComboBox->addItem("Condor Cloud");
    cloudProviderTypeComboBox->addItem("VMware vSphere");
    connections();

}
void EditCloudProviders::connections()
{
    connect(savePushButton,SIGNAL(clicked()),this,SLOT(save()));
    connect(backPushButton,SIGNAL(clicked()),this,SLOT(back()));

}
void EditCloudProviders::save()
{
QString providerName=providerNameLineEdit->text();
QString deltaCloudProvider=xDeltaCloudProviderLineEdit->text();
int providerID=cloudProviderNameComboBox->currentIndex();
QString providerurl=providerURLLineEdit->text();
Login *object=new Login;
QString command="curl -k --user "+object->returnUserName()+":"+object->returnPassword()+" --data \"provider[name]="+providerName+"\" --data  \"provider[deltacloud_provider]="+deltaCloudProvider+"\" --data-urlencode \"provider[url]="+providerurl+"\" --data \"provider[provider_type_id]="+providerID+"\" https://localhost/conductor/providers/"+providerID+".xml"+"  -X PUT";
qDebug()<<command;
QByteArray commandBA = command.toLocal8Bit();
const char *commandC = commandBA.data();
system(commandC);
messageBox->setText("Sucessful");
messageBox->show();
}
void EditCloudProviders::back()
{
CloudProviderAccountSetup *object=new CloudProviderAccountSetup;
this->close();
object->show();
}

