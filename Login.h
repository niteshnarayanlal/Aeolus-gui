#ifndef LOGIN_H
#define LOGIN_H
#include "ui_Login.h"
#include "StartDialog.h"
#include"LoggedInDialog.h"
#include <QDialog>
#include <QMessageBox>
class Login:public QDialog,public Ui::Login
{
Q_OBJECT

    QMessageBox message;
    static QString userName;
    static QString password;
public:
    Login();
    void connections();
    QString returnUserName();
    QString returnPassword();

private slots:
      void authenticate();
      void checkBoxImplementation();
      void back();
 };
#endif // LOGIN_H
