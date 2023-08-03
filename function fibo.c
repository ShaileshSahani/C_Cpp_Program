#include<stdio.h>
#include<conio.h>
void fibo(int n)
{
int s=0,f=1,t,a;
printf("%d\t%d\t",s,f);
for(a=2;a<=n;a++)
{
t=s+f;
printf("%d\t",t);
s=f;
f=t;
}
}
void main() 
{
int num;
clrscr();
printf("Enter the length of series=");
scanf("%d",&num);
fibo(num);

getch();
}