#include<stdio.h>
#include<conio.h>
void main() 
{
int i,j,row,spc,k,t=1;
printf("Enter the row");
scanf("%d",&row);
spc=row+4-1;
for (i=1;i<=row;i++)
{
 for(k=spc;k>=1;k--)
 {
 printf(" ");
 }
 for(j=1;j<=i;j++)
 {
 printf("%d ",t++);
 }
printf("\n");
spc--;
}
getch();
}