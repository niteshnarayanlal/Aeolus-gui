#include"InitialConfiguration.h"
#include<QFile>
#include<QTextStream>
#include <iostream>

InitialConfiguration::InitialConfiguration()
{
    setupUi(this);
    this->setWindowTitle("Aeolus Initial Configuration");
    system("echo $DESKTOP_SESSION>desktopEnvironment.txt");
    QFile file("desktopEnvironment.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QTextStream out(&file);
    QString environment;
    while(!out.atEnd())
    {
        environment=out.readLine();
    }
    QByteArray environmentEA = environment.toLocal8Bit();
    const char *environmentC = environmentEA.data();
    if(strstr(environmentC,"kde"))
    std::cout << system("kdesu sh command.sh");
    else
    std::cout << system("gnomesu sh command.sh");
    file.remove();
}

