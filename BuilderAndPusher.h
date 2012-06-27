#ifndef BUILDERANDPUSHER_H
#define BUILDERANDPUSHER_H
#include"ui_BuilderAndPusher.h"
#include"BuildLogin.h"
#include"LoggedInDialog.h"
#include<QDialog>
#include<QMessageBox>
class BuilderAndPusher:public QDialog ,public Ui::BuilderAndPusher
{
Q_OBJECT
public:
    BuilderAndPusher();
    void connections();
    void templateCreator();
    void executeCommand();
    QMessageBox messageBox;
private slots:
    void submit();
    void back();
};
#endif // BUILDERANDPUSHER_H
