#include"StartDialog.h"
#include<QMovie>
StartDialog::StartDialog()
{
    setupUi(this);
   /*
    animationLabel-> setWindowFlags(Qt::FramelessWindowHint);
    QMovie *movie = new QMovie("icon.gif");
    animationLabel->setMovie(movie);
    movie->start();
    */
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
