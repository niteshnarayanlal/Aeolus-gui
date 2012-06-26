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

/*

void Login::replyFinished(QNetworkReply * reply)
{
    qDebug()<<reply->readAll();
    if(reply->error()==QNetworkReply::NoError)
        qDebug()<<"\n Authentication Done";
    else if(reply->error()==QNetworkReply::AuthenticationRequiredError)
        qDebug()<<"\n Wrong Credentials ";


    reply->deleteLater();
}
void onError(QNetworkReply::NetworkError networkError)
{
    qDebug()<<"\n code is :"<<networkError;
}

*/

void Login::checkBoxImplementation()
{

    if(showPasswordCheckBox->isChecked())
       passwordLineEdit->setEchoMode(QLineEdit::Normal);

    else
       passwordLineEdit->setEchoMode(QLineEdit::Password);

}

void Login::authenticate()
{

    userName=userNameLineEdit->text();
    password=passwordLineEdit->text();
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

    /*
    QString concatenated = userName + ":" + password;
    QByteArray data = concatenated.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader("Authorization", headerData.toLocal8Bit());;
    qDebug()<<data;
    manager = new QNetworkAccessManager();
    request.setUrl(QUrl("http://localhost/conductor/providers"));
    QNetworkReply *rep=manager->get(request);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
        this, SLOT(replyFinished(QNetworkReply*)));

    connect(rep,SIGNAL(error(QNetworkReply::NetworkError)),SLOT(onError(QNetworkReply::NetworkError)),Qt::QueuedConnection);

    */


}

