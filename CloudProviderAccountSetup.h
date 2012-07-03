#ifndef CLOUDPROVIDERACCOUNTSETUP_H
#define CLOUDPROVIDERACCOUNTSETUP_H
#include"ui_CloudProviderAccountSetup.h"
#include"LoggedInDialog.h"
#include"MockCloudProvider.h"
#include"OtherCloudProvider.h"
#include"EditCloudProviders.h"
#include"NewCloudProviders.h"
#include<QDialog>
class CloudProviderAccountSetup :public QDialog ,public  Ui::CloudProviderAccountSetup
{
Q_OBJECT
public:
    CloudProviderAccountSetup();
    void connections();
    QString selectedCloudProvider;

private slots:
     void showNext();
     void back();
     void showEditCloudProvider();
     void showNewCloudProvider();
};

#endif // CLOUDPROVIDERACCOUNTSETUP_H
