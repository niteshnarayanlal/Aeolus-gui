#include"StartDialog.h"
StartDialog::StartDialog()
{
    setupUi(this);
    this->setWindowTitle("Aeolus - Image Manager");
    connections();

}
void StartDialog::connections()
{
    connect(loginPushButton,SIGNAL(clicked()),this,SLOT(showLogin()));
    connect(initialConfigurationPushButton,SIGNAL(clicked()),this,SLOT(showInitialConfiguration()));
}
void StartDialog::showLogin()
{
    Login *object=new Login;
    this->close();
    object->show();
}
void StartDialog::showInitialConfiguration()
{
    InitialConfiguration *object=new InitialConfiguration;
    this->close();
    object->show();
}
