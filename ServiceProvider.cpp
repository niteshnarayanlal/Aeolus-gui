#include"ServiceProvider.h"
#include<QDebug>
#include<QFile>


ServiceProvider::ServiceProvider()
{
    setupUi(this);
    this->setWindowTitle("Service Provider");
    connections();
}
void ServiceProvider::connections()
{
    connect(okPushButton,SIGNAL(clicked()),this,SLOT(pushImage()));
}

void ServiceProvider::pushImage()
{
    qDebug()<<"coming here";
    QString accountName=accountNameLineEdit->text();
    QString command="aeolus-image push -A "+accountName+" -t "  ;
    qDebug()<<command;
   //reading the file
   QFile file("buildOutput.txt");
   file.open(QIODevice::Text | QIODevice::ReadOnly);
   QTextStream out(&file);

   while(!out.atEnd())
   {
   QString log=out.readLine();
   qDebug()<<log;
   QString c="COMPLETED";

   QByteArray cBA = c.toLocal8Bit();
   const char *cC = cBA.data();

   QByteArray logBA = log.toLocal8Bit();
   const char *logC = logBA.data();

   if(strstr(logC,cC))
   {
       if(strstr(logC,"mock"))
       {
             int i=0;
             while(i<37)
             {
                 ID[i]=logC[i];
                 i++;
             }
             command+=ID;


       }
       else if(strstr(logC,"ec2"))
       {

           int i=0;
           while(i<37)
           {
               ID[i]=logC[i];
               i++;
           }
           command+=ID;

       }

   }

   }
file.close();
//removing buildOutput file
   file.remove("buildOutput.txt");

      command+=">>finalReport.txt";
      qDebug()<<command;
      QByteArray commandBA = command.toLocal8Bit();
      const char *commandC = commandBA.data();
   system(commandC);
   QFile fileReport("finalReport.txt");
   fileReport.open(QIODevice::Text | QIODevice::ReadOnly);
   QTextStream outReport(&file);
   qDebug()<<"before while";
   while(!outReport.atEnd())
   {
       qDebug()<<"inside while";
          QString report=file.readLine();
          qDebug()<<report;
          QByteArray reportBA = report.toLocal8Bit();
          const char *reportC = reportBA.data();
          if(strstr(reportC,"ERROR"))
          {
          messageBox.setText("ERROR IN PUSHING");
          messageBox.show();
          messageBox.showMaximized();

         }
        else
        {
         messageBox.setText("Image Sucessfully Pushed");
         messageBox.show();
         messageBox.showMaximized();
        }


   }
   fileReport.close();
  //fileReport.remove("finalReport.txt");


  pushDeployables();

  this->close();
  downloadPem();
}

void ServiceProvider::pushDeployables()
{

    Login *ob=new Login();
    qDebug()<<"here";
    //using curl to push the deployable now
    QString imageID(ID);
    QString command;
    command=" curl --user "+ob->userName+":"+ob->password +" -F \"catalog_id[]=1\" -F \"create_from_image="+imageID+" \" -F \"deployable[name]=soma\" -F \"hardware_profile=1\" http://localhost:3000/deployables";
    command+=">>deployReport.txt";
    qDebug()<<"command is"<<command;
    QByteArray commandBA = command.toLocal8Bit();
    const char *commandC = commandBA.data();
    system(commandC);
    //Asking user to Configure EC2 For SSH
    EC2SSHConfigurer *object=new EC2SSHConfigurer;
    object->show();

}

void ServiceProvider::downloadPem()
{

    messageBox.setText("Please Retrieve the Private SSH Key For further assistance aeolusproject.org/gsg/0.9.0/start_image.html once that is done plz use \"ssh -i instance_1_private_key.pem\" in your terminal to start the image ");
    messageBox.show();

}
