#include"OtherCloudProvider.h"
#include"CloudProviderAccountSetup.h"
OtherCloudProvider::OtherCloudProvider()
{
    //CloudProviderAccountSetup *object=new CloudProviderAccountSetup;
    //selectedCloudTypeLabel->setText(object->selectedCloudProvider);
    setupUi(this);
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

