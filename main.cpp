#include<QApplication>
#include<QtGui>
#include"StartDialog.h"
int main(int args, char *argv[])
{
    QApplication mainObject(args,argv);
    StartDialog *childObject=new StartDialog;
    childObject->show();
    return mainObject.exec();
}
