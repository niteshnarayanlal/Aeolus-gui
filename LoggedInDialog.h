#ifndef LOGGEDINDIALOG_H
#define LOGGEDINDIALOG_H
#include"ui_LoggedInDialog.h"
#include"Login.h"
#include"BuilderAndPusher.h"
#include"CloudProviderAccountSetup.h"
#include<QDialog>
class LoggedInDialog:public QDialog ,public Ui::LoggedInDialog
{
    Q_OBJECT
public:
    LoggedInDialog();
    void connections();
private slots:
    void showBuilderAndPusher();
    void showCloudProviderAccountSetup();
    void logOut();
};

#endif // LOGGEDINDIALOG_H
