#ifndef INITIALCONFIGURATION_H
#define INITIALCONFIGURATION_H
#include<QDialog>
#include"ui_InitialConfiguration.h"
class InitialConfiguration:public QDialog ,public Ui::InitialConfiguration
{
Q_OBJECT
public:
    InitialConfiguration();
};

#endif // INITIALCONFIGURATION_H
