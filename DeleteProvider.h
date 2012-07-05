#ifndef DELETEPROVIDER_H
#define DELETEPROVIDER_H
#include"ui_DeleteProvider.h"
#include"CloudProviderAccountSetup.h"
#include"Login.h"
#include<QMessageBox>
#include<QDialog>
#include<QFile>
#include<QTextStream>
class DeleteProvider:public QDialog, Ui::Dialog
{
 Q_OBJECT
public:
    DeleteProvider();
    void connections();
    void addList();
    QMessageBox *messageBox;
private slots:
    void deleteProvider();
    void back();

};

#endif // DELETEPROVIDER_H
