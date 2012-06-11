#include<QApplication>
#include"Login.h"
#include"InitialConfiguration.h"
int main(int args, char *argv[])
{
    QApplication mainObject(args,argv);
    Login *childObject=new Login;
 // InitialConfiguration *childObject=new InitialConfiguration;
    childObject->show();
    return mainObject.exec();
}
