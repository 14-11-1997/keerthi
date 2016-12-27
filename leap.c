#include<stdio.h>
int main()
{
int y;
printf("Enter the year");
scanf("%d",&y);
if((y%4==0)&&(y%100!=0)||(y%400==0))
printf("y is leap year");
else
printf("y is not aleap year");
}
