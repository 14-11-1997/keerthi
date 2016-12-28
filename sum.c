#include<stdio.h>
#include<conio.h>
void main()
{
int k,g,sum=0;
printf("enter the positive value:");
scanf("%d",&g);
for(k=1;k<=g;k++)
{
sum=sum+k;
}
printf("sum=%d",sum);
getch();
}
