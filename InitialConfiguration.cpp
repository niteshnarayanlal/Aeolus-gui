#include"InitialConfiguration.h"
InitialConfiguration::InitialConfiguration()
{
    setupUi(this);
    this->setWindowTitle("Aeolus Initial Configuration");
    system("chmod a+x command");
    system("./command");
}
