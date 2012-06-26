#include<stdio.h>
#include<stdlib.h>
void main()
{
system("/usr/sbin/aeolus-configure -p ec2");
system("/usr/sbin/aeolus-configure -p mock");
system("yes n | cp iptables /etc/sysconfig ");
system("yes n | cp ip6tables /etc/sysconfig ");  
}
