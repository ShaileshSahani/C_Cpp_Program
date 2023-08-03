#include<stdio.h>
#include<conio.h>
void main() 
{
int a, n, tab;
clrscr();
printf("Enter the integer");
scanf("%d",&a);
for(n=1;n<=10;n++)
{
tab=a*n;
printf("%d*%d=%d\n",a,n,a*n);
}
getch();
}