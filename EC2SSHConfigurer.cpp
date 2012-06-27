#include"EC2SSHConfigurer.h"
EC2SSHConfigurer::EC2SSHConfigurer()
{
setupUi(this);
connections();
this->setWindowTitle("EC2 SSH configurer");
webView->load(QUrl("https://console.aws.amazon.com/ec2/home?#s=SecurityGroups"));
}
void EC2SSHConfigurer::connections()
{
    connect(okPushButton,SIGNAL(clicked()),this,SLOT(close()));
    connect(closePushButton,SIGNAL(clicked()),this,SLOT(close()));

}
