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

connections();
}
void CloudProviderAccountSetup::connections()
{
    connect(nextPushButton,SIGNAL(clicked()),this,SLOT(showNext()));
}
void CloudProviderAccountSetup::showNext()
{
selectedCloudProvider=cloudProviderComboBox->currentText();
QString mock="mock";
bool equivalent= (mock==selectedCloudProvider);

if(equivalent)
  {

  qDebug()<<"its in mock";
  this->close();
  mockObject.show();
  }
  else
  {
  qDebug()<<"not in mock";
  this->close();
  otherObject.show();
  }

}
