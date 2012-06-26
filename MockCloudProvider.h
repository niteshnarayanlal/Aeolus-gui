#ifndef MOCKCLOUDPROVIDER_H
#define MOCKCLOUDPROVIDER_H
#include"ui_MockCloudProvider.h"
#include<QDialog>
class MockCloudProvider:public QDialog , public Ui::MockCloudProvider
{
    Q_OBJECT
public:
    MockCloudProvider();
    void connections();

private slots:
    void submit();
};

#endif // MOCKCLOUDPROVIDER_H
