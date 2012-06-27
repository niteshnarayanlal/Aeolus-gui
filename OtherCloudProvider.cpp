#include"OtherCloudProvider.h"
OtherCloudProvider::OtherCloudProvider()
{

  //CloudProviderAccountSetup *object=new CloudProviderAccountSetup;
  //selectedCloudTypeLabel->setText(object->selectedCloudProvider);
    setupUi(this);
    this->setWindowTitle("Cloud Provider Account Setup");
    connections();
}

void OtherCloudProvider::connections()
{
    connect(okPushButton,SIGNAL(clicked()),this,SLOT(submit()));
    connect(closePushButton,SIGNAL(clicked()),this,SLOT(close()));

}
void OtherCloudProvider::submit()
{

}

