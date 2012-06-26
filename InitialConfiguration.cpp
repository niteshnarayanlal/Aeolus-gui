#include"InitialConfiguration.h"
InitialConfiguration::InitialConfiguration()
{
    setupUi(this);
    this->setWindowTitle("Aeolus Initial Configuration");
    system("gcc command.c -o command");
    system("chmod a+x command");
    system("./command");
}
