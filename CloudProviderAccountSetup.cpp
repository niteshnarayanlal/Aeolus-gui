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
