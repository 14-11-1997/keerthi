#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("enter the character:");
scanf("%c",&ch);
if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
{
printf(" the character is alphabet");
}
else
{
printf(" the character is not alphabet");
}
return 0;
}


