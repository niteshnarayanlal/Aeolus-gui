#ifndef NEWCLOUDPROVIDERS_H
#define NEWCLOUDPROVIDERS_H
#include"ui_NewCloudProviders.h"
#include"CloudProviderAccountSetup.h"
#include"Login.h"
#include<QDialog>
#include<QMessageBox>
class NewCloudProviders:public QDialog ,public Ui::NewCloudProviders
{
    Q_OBJECT

    QMessageBox *messageBox;
public:
    NewCloudProviders();
    void connections();
private slots:
    void back();
    void save();

};

#endif // NEWCLOUDPROVIDERS_H
