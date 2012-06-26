#ifndef BUILDLOGIN_H
#define BUILDLOGIN_H
#include<QDialog>
#include"ui_BuildLogin.h"
class BuildLogin: public QDialog ,public Ui::BuildLogin
{
    Q_OBJECT;
public:
    BuildLogin();
    void connections();
private slots:
    void submit();

};

#endif // BUILDLOGIN_H
