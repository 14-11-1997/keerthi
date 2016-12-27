#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("Enter the character:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='U')
printf("The character is vowel");
else
printf("The character is consonant");
getch();
}
