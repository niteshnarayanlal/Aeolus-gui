#include"CatalogCreatorAndDeployer.h"
CatalogCreatorAndDeployer::CatalogCreatorAndDeployer()
{
    setupUi(this);
    connections();

}
void CatalogCreatorAndDeployer::connections()
{
    connect(submitPushButton,SIGNAL(clicked()),this,SLOT(submit()));
    connect(backPushButton,SIGNAL(clicked()),this,SLOT(back()));

}
void CatalogCreatorAndDeployer::submit()
{

}
void CatalogCreatorAndDeployer::back()
{

}
