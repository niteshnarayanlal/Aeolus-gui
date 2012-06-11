#include"Login.h"
#include <QDebug>
#include<QFile>

Login::Login()
{
    setupUi(this);
    setWindowTitle("Aeolus Login");
    connections();
    checkBoxImplementation();
}
void Login::connections()
{
   connect(loginPushButton,SIGNAL(clicked()),this,SLOT(authenticate()));
   connect(showPasswordCheckBox,SIGNAL(stateChanged(int)),this,SLOT(checkBoxImplementation()));

}


void Login::checkBoxImplementation()
{

    if(showPasswordCheckBox->isChecked())
       passwordLineEdit->setEchoMode(QLineEdit::Normal);

    else
       passwordLineEdit->setEchoMode(QLineEdit::Password);

}

void Login::authenticate()
{

    QString userName=userNameLineEdit->text();
    QString password=passwordLineEdit->text();
    QString command="curl -k --user "+ userName+":"+password + " https://localhost/conductor/providers";
    qDebug()<<command;
    QByteArray commandBA = command.toLocal8Bit();
    const char *commandC = commandBA.data();
    system(commandC);

    QFile file("/var/log/aeolus-conductor/rails.log");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QTextStream out(&file);
    QString lastLineRead;
    while(!out.atEnd())
    {
    QString log=out.readLine();
    lastLineRead=log;
    }
    QByteArray lastLineReadBA = lastLineRead.toLocal8Bit();
    const char *lastLineReadC = lastLineReadBA.data();
    if(strstr(lastLineReadC,"401 Unauthorized"))
    {

        message.setText("Login Error , Please Check your credentials");
        message.show();
    }
    else
    {

        message.setText("Login Successful");
        message.show();
    }


}

