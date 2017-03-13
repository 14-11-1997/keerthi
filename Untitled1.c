#include<stdio.h>
#include<conio.h>
void main()
{
int pow,num,i=1;
long int sum=1;
printf("\n enter the number");
scanf("%d",&num);
printf("\n enter the power:");
scanf("%d",&pow);
while(i<=pow)
{
sum=sum*num;
i++;
}
printf("\n%d to the power %d is:%ld",num,pow,sum);
return 0;
}
