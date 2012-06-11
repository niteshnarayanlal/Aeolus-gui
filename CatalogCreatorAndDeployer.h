#ifndef CATALOGCREATORANDDEPLOYER_H
#define CATALOGCREATORANDDEPLOYER_H
#include"ui_CatalogCreatorAndDeployer.h"
#include<QDialog>
class CatalogCreatorAndDeployer:public QDialog,public Ui::CatalogCreatorAndDeployer
{
Q_OBJECT;
public:
    CatalogCreatorAndDeployer();
    void connections();

private slots:
    void submit();
    void back();
};

#endif // CATALOGCREATORANDDEPLOYER_H
