#ifndef EC2SSHCONFIGURER_H
#define EC2SSHCONFIGURER_H
#include"ui_EC2SSHConfigurer.h"
#include<QDialog>
class EC2SSHConfigurer :public QDialog ,public Ui::EC2SSHConfigurer
{
    Q_OBJECT
public:
    EC2SSHConfigurer();
    void connections();

};

#endif // EC2SSHCONFIGURER_H
