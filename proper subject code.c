//Code for student results//
#include<stdio.h>
#include<conio.h>
void main()
{
    int mth,bio,chm,phy,eng,it,r;
    char nm[20];
    float percent;
    //Entering the data//
printf("Enter the name of student");
scanf("%s",&nm);
printf("Enter the Roll number=");
scanf("%d",&r);
printf("Maths marks=");
scanf("%d",&mth);
printf("Biology marks=");
scanf("%d",&bio);
printf("Chemistry marks=");
scanf("%d",&chm);
printf("Physics marks=");
scanf("%d",&phy);
printf("English marks=");
scanf("%d",&eng);
printf("IT marks=");
scanf("%d",&it);
//beginning the logic//
if(mth>=35 && bio>=35 && chm>=35 && phy>=35 && eng>=35 && it>=34)
   {
//checking the condition//
     percent=(mth+bio+chm+phy+eng+it)/6;
    if(percent>=75)
    printf("%f=passed with distinction",percent);
    else if(percent>=60 && percent<=74)
    printf("%f=first class pass",percent);
    else if(percent>=35 && percent<=59)
    printf("%f=just pass",percent);
    }
    //default statement//
else
printf("you fail");
getch();
}
//ready to complile//