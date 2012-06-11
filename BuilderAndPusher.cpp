#include"BuilderAndPusher.h"
BuilderAndPusher::BuilderAndPusher()
{
setupUi(this);
connections();
}
void BuilderAndPusher::connections()
{
    connect(submitPushButton,SIGNAL(clicked()),this,SLOT(submit()));
    connect(backPushButton,SIGNAL(clicked()),this,SLOT(back()));
}
void BuilderAndPusher::submit()
{

}
void BuilderAndPusher::back()
{

}
