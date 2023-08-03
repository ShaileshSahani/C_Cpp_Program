#include<stdio.h>
#include<conio.h>
void main()
{
char s;
clrscr();
printf("Enter the character:");
scanf("%c",&s);
if((s>='a'&&s<='z')||(s>='A'&&s<='Z'))
{
printf("It's an alphabet\n");
}
else if(s>='0'&&s<='9')
{
printf("It's a digit");
}
else
{
printf("It's a special character");
}
getch();
}