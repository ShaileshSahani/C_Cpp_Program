#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("Enter tha number");
scanf("%d",&x);
switch (x)
{
case 1:
printf("Its Monday");
break;
case 2:
printf("Its Tuesday");
break;
case 3:
printf("Its Wednesday");
break;
case 4:
printf("Its Thursday");
break;
case 5:
printf("Its Friday");
break;
case 6:
printf("Its Saturday");
break;
case 7:
printf("Its sunday");
break;
default:
printf("Not in a week");
}
getch();
}