#include"BuilderAndPusher.h"
#include<QFile>
#include<QTextStream>
BuilderAndPusher::BuilderAndPusher()
{
setupUi(this);
connections();
this->setWindowTitle("Aeolus Image Builder And Pusher");
}
void BuilderAndPusher::connections()
{
    connect(submitPushButton,SIGNAL(clicked()),this,SLOT(submit()));
    connect(backPushButton,SIGNAL(clicked()),this,SLOT(back()));
}
void BuilderAndPusher::executeCommand()
{

    messageBox.setText("\n Enter any of the existing Conductor user credentials to sucessfully build and push the image");
    messageBox.show();
    BuildLogin *object=new BuildLogin();
    object->show();
    system("aeolus-image build --target ec2,mock --template template.xml --environment default>> buildOutput.txt ");
}

void BuilderAndPusher::templateCreator()
{

    QString name=osNameLineEdit->text();
    QString version=versionLineEdit->text();
    QString password=rootPasswordLineEdit->text();
    QString description=descriptionLineEdit->text();
    QString architecture;
    //check which radion button is been selected and based on that set the architecture value
    if(x86_64RadioButton->isEnabled())
        architecture="x86_64";
    else if(i386RadioButton->isEnabled())
        architecture="i386";
    else
    {
        messageBox.setText("Please click a radio button");
        messageBox.show();
     }
    QString url="http://download.fedoraproject.org/pub/fedora/linux/releases/"+version+"/Fedora/"+architecture+"/os/";
    QFile file("template.xml");
    file.open(QIODevice::Text | QIODevice::ReadWrite);
    QTextStream out(&file);
    QString fileContent="<template> \n <name> "+name+" "+version+ " Template</name> \n <os> \n <name>"+name+"</name> \n <version>"+version+"</version> \n <arch>"+architecture+"</arch> \n <install type='url'> \n  <url>"+url+"</url> \n </install> \n<rootpw>"+password+"</rootpw> \n </os> \n <description>"+description+"</description>\n <commands>\n <command name=\"F15 updates\">yum update -y</command>\n </commands> \n </template>";
    out << fileContent;

    executeCommand();

}

void BuilderAndPusher::submit()
{
templateCreator();
this->close();
}

void BuilderAndPusher::back()
{
    LoggedInDialog *object=new LoggedInDialog;
    this->close();
    object->show();

}
