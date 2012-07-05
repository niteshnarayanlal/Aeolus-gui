#ifndef LISTPROVIDERS_H
#define LISTPROVIDERS_H
#include"ui_ListProviders.h"
#include"Login.h"
#include<QFile>
#include<QTextStream>
#include<QDialog>
class ListProviders:public QDialog, Ui::ListProviders
{
Q_OBJECT
public:
    ListProviders();
    void connections();
    void displayList();

};

#endif // LISTPROVIDERS_H
