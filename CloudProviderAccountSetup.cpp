#include"CloudProviderAccountSetup.h"
#include<QDebug>
CloudProviderAccountSetup::CloudProviderAccountSetup()
{
setupUi(this);
cloudProviderComboBox->addItem("ec2-ap-northeast-1");
cloudProviderComboBox->addItem("mock");
cloudProviderComboBox->addItem("ec2-us-east-1");
cloudProviderComboBox->addItem("ec2-ap-southeast-1");
cloudProviderComboBox->addItem("ec2-us-west-2");
cloudProviderComboBox->addItem("ec2-eu-west-1");
cloudProviderComboBox->addItem("ec2-us-west-1");
this->setWindowTitle("Cloud Provider Account Setup");

connections();
}
void CloudProviderAccountSetup::connections()
{
    connect(nextPushButton,SIGNAL(clicked()),this,SLOT(showNext()));
    connect(backPushButton,SIGNAL(clicked()),this,SLOT(back()));
    connect(editProvidersPushButton,SIGNAL(clicked()),this,SLOT(showEditCloudProvider()));
    connect(addProvidersPushButton,SIGNAL(clicked()),this,SLOT(showNewCloudProvider()));
    connect(deleteProviderPushButton,SIGNAL(clicked()),this,SLOT(showDeleteProvider()));
    connect(listProvidersPushButton,SIGNAL(clicked()),this,SLOT(showListProvider()));

}
void CloudProviderAccountSetup::showNext()
{
selectedCloudProvider=cloudProviderComboBox->currentText();
QString mock="mock";
qDebug()<<"its here now";

bool equivalent= (mock==selectedCloudProvider);
qDebug()<<equivalent;
if(equivalent)
  {
  MockCloudProvider *mockObject=new MockCloudProvider;
  qDebug()<<"its in mock";
  this->close();
  mockObject->show();
  }
else
  {
  OtherCloudProvider *otherObject=new OtherCloudProvider;
  qDebug()<<"not in mock";
  this->close();
  otherObject->show();
  }

}
void CloudProviderAccountSetup::back()
{
LoggedInDialog *object=new LoggedInDialog;
this->close();
object->show();
}
void CloudProviderAccountSetup::showEditCloudProvider()
{
    EditCloudProviders *object=new EditCloudProviders;
    this->close();
    object->show();
}
void CloudProviderAccountSetup::showNewCloudProvider()
{
    NewCloudProviders *object=new NewCloudProviders;
    this->close();
    object->show();
}
void CloudProviderAccountSetup::showDeleteProvider()
{
    DeleteProvider *object=new DeleteProvider;
    this->close();
    object->show();
}
void CloudProviderAccountSetup::showListProvider()
{
    ListProviders *object=new ListProviders;
    this->close();
    object->show();
}
