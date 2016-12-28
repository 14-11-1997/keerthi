#include<stdio.h>
#include<conio.h>
void main()
{
int t,z,sum=0;
printf("enter the any integer value:");
scanf("%d",&z);
for(t=1;t<=z;t++)
{
sum=sum+t;
}
printf("sum=%d",sum);
getch();
}
