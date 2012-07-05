#ifndef EDITCLOUDPROVIDERS_H
#define EDITCLOUDPROVIDERS_H
#include"ui_EditCloudProviders.h"
#include"CloudProviderAccountSetup.h"
#include"Login.h"
#include<QDialog>
#include<QMessageBox>
class EditCloudProviders:public QDialog, public Ui::EditCloudProviders
{
Q_OBJECT
public:
    EditCloudProviders();
    void connections();
    QMessageBox *messageBox;
private slots:
    void save();
    void back();
};

#endif // EDITCLOUDPROVIDERS_H
