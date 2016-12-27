#include<stdio.h>
#include<conio.h>
void main()
{
int d,e,f;
printf("\n enter the three numbers");
scanf("%d %d %d",&d,&e,&f);
if(d>e&&d>f)
printf("d is the biggest",&d);
if(d<e&&e>f)
printf("e is the biggest",&e);
else
printf("f is the biggest",&f);
getch();
}

