#include<QApplication>
#include<QtGui>
#include"Login.h"
#include"InitialConfiguration.h"
#include"BuilderAndPusher.h"
#include"ServiceProvider.h"
#include"CloudProviderAccountSetup.h"
int main(int args, char *argv[])
{
    QApplication mainObject(args,argv);
 // Login *childObject=new Login;
  InitialConfiguration *childObject=new InitialConfiguration;
   //BuilderAndPusher *childObject=new BuilderAndPusher;
   //ServiceProvider *childObject=new ServiceProvider;
   // CloudProviderAccountSetup *childObject=new CloudProviderAccountSetup;
    childObject->show();
    return mainObject.exec();
}
