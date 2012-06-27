#include"MockCloudProvider.h"
MockCloudProvider::MockCloudProvider()
{
    setupUi(this);
    this->setWindowTitle("Mock Cloud Provider Form");
    selectedCloudTypeLabel->setText("mock");
    connections();
}

void MockCloudProvider::connections()
{
    connect(okPushButton,SIGNAL(clicked()),this,SLOT(submit()));
    connect(closePushButton,SIGNAL(clicked()),this,SLOT(close()));

}
void MockCloudProvider::submit()
{

}
