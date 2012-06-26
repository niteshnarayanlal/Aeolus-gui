#ifndef CLOUDPROVIDERACCOUNTSETUP_H
#define CLOUDPROVIDERACCOUNTSETUP_H
#include"ui_CloudProviderAccountSetup.h"
#include"MockCloudProvider.h"
#include"OtherCloudProvider.h"
#include<QDialog>
class CloudProviderAccountSetup :public QDialog ,public  Ui::CloudProviderAccountSetup
{
Q_OBJECT
public:
    CloudProviderAccountSetup();
    void connections();
    QString selectedCloudProvider;
private:
    MockCloudProvider mockObject;
    OtherCloudProvider otherObject;
private slots:
     void showNext();
};

#endif // CLOUDPROVIDERACCOUNTSETUP_H
