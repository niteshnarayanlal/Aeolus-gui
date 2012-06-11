#ifndef BUILDERANDPUSHER_H
#define BUILDERANDPUSHER_H
#include"ui_BuilderAndPusher.h"
#include<QDialog>
class BuilderAndPusher:public QDialog ,public Ui::BuilderAndPusher
{
Q_OBJECT
public:
    BuilderAndPusher();
    void connections();
private slots:
    void submit();
    void back();
};
#endif // BUILDERANDPUSHER_H
