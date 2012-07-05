#include"ListProviders.h"
#include<QDebug>
ListProviders::ListProviders()
{
    setupUi(this);
    displayList();
    connections();
}
void ListProviders::connections()
{
    connect(okPushButton,SIGNAL(clicked()),this,SLOT(close()));
}
void ListProviders::displayList()
{
    Login *object=new Login;
    QString command=" curl -k --user "+object->returnUserName()+":"+object->returnPassword()+" https://localhost/conductor/providers.xml >>providersList.txt";
    QByteArray commandBA = command.toLocal8Bit();
    const char *commandC = commandBA.data();
    system(commandC);
    QFile file("providersList.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QTextStream out(&file);
    QString content,providerName;
    int count=1,mul=1,providerNumber=1;
    while(!out.atEnd() && providerNumber!=10)//currently max 10 proviers
    {
    content=out.readLine();
       if(count==3*mul)
      {
           qDebug()<<"count:"<<count;
           qDebug()<<"mul:"<<mul;
           qDebug()<<content;
           //we have to extract the name from tags
           content.remove(0,6);
           content.chop(7);
           providerName+=content;
           providerName+="\n  ";
           providerNumber++;
           mul+=2;
      }
     count++;
    }
    providersListLabel->setText(providerName);
}
