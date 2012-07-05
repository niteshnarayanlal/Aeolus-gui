#include"DeleteProvider.h"
#include<QDebug>
DeleteProvider::DeleteProvider()
{
  setupUi(this);
  addList();
  connections();
}
void DeleteProvider::addList()
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
           providerName=content;
           cloudProviderComboBox->addItem(providerName);
           providerNumber++;
           mul+=2;
      }
     count++;
    }
    //here we need to extrace individual provider name they are in the order 3 9 15 etc .. in the line and after that we have to add that in the combo box
}
void DeleteProvider::connections()
{
    connect(deletePushButton,SIGNAL(clicked()),this,SLOT(deleteProvider()));
    connect(backPushButton,SIGNAL(clicked()),this,SLOT(back()));
}
void DeleteProvider::back()
{
    CloudProviderAccountSetup *object=new CloudProviderAccountSetup;
    this->close();
    object->show();
}
void  DeleteProvider::deleteProvider()
{
    int providerID=cloudProviderComboBox->currentIndex();
    Login *object=new Login;
    QString command="curl -k --user "+object->returnUserName()+":"+object->returnPassword()+" --data \"provider[name]="+cloudProviderComboBox->currentText()+ "--data \"provider[deltacloud_provider]=\" --data-urlencode \"provider[url]=http://localhost:3002/api\" --data \"provider[provider_type_id]="+providerID+"\" https://localhost/conductor/providers/"+providerID+".xml  -X DELETE";
    qDebug()<<command;
    QByteArray commandBA = command.toLocal8Bit();
    const char *commandC = commandBA.data();
    system(commandC);
    messageBox->setText("Sucessful");
    messageBox->show();
}
