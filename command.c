#include<stdio.h>
#include<stdlib.h>
void main()
{
system("/usr/sbin/aeolus-configure -p ec2");
system("/usr/sbin/aeolus-configure -p mock");
system("yes n | cp /etc/sysconfig iptables");
system("yes n | cp /etc/sysconfig ip6tables");  
}
