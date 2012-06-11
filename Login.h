#ifndef LOGIN_H
#define LOGIN_H
#include "ui_Login.h"
#include <QDialog>
#include<QMessageBox>
class Login:public QDialog,public Ui::Login
{
Q_OBJECT

    QMessageBox message;

public:
    Login();
    void connections();

private slots:
      void authenticate();
      void checkBoxImplementation();

};
#endif // LOGIN_H
