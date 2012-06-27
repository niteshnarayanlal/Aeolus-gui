#ifndef OTHERCLOUDPROVIDER_H
#define OTHERCLOUDPROVIDER_H
#include"ui_OtherCloudProvider.h"
#include"CloudProviderAccountSetup.h"
#include<QDialog>
class OtherCloudProvider:public QDialog , public Ui::OtherCloudProvider
{
    Q_OBJECT
public:
    OtherCloudProvider();
    void connections();
private slots:
    void submit();
};
#endif // OTHERCLOUDPROVIDER_H
