#include<stdio.h>
#include<conio.h>
#include<math.h>
void Q_equation(int a, int b, int c)
{
if(a== 0)
{
printf("The x cannot be zero\n");
return;
}
int dis=b*b-4*a*c;
double s=sqrt(dis),root1, root2;
if(dis==0)
{
printf("Both Roots Are Equal\n");
root1=root2=-b/2*a;
printf("%f%f",root1,root2);
}
else if(dis>0)
{
printf("Both Roots Are Real And Unequal\n");
root1=(-b+s) / (2*a);
root2=(-b-s) / (2*a);
printf("The solution Of Roots Are %f and %f",root1,root2);
}
else
{
printf("The Roots Are Imaginary\n");
float real=-b/2*a;
float img=sqrt(-dis)/2*a;
printf("The solution is %.f+%.fi and %.f-%.fi",real,img,real,img);
}
}
void main()
{
int x, y, z;
printf("Enter the value of Coifessient x, y and z\n");
scanf("%d%d%d",&x,&y,&z);
Q_equation(x, y, z);
}