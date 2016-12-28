#include<stdio.h>
#include<conio.h>
void main()
{
 int h,count=0;
printf("\n enter the value");
scanf("%d",&h);
while(h!=0)
{
h=h/10;
count++;
}
printf("digit=%d",count);
}
