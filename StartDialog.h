#ifndef STARTDIALOG_H
#define STARTDIALOG_H
#include"ui_StartDialog.h"
#include"InitialConfiguration.h"
#include"Login.h"
#include<QDialog>
class StartDialog:public QDialog ,Ui::StartDialog
{
    Q_OBJECT
public:
    StartDialog();
    void connections();
private slots:
    void showLogin();
    void showInitialConfiguration();

};

#endif // STARTDIALOG_H
