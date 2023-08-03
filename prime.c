
/* void main() 
{
int num, i,ctr=0,tem;
printf("Enter the number:");
scanf("%d",&num);
tem=num;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
ctr++;
break;
}
}
if(ctr==0&&num!=1)
printf("%d is a prime number",tem);
else
printf("%d is not a prime number",tem);
getch();
}
*/

#include <stdio.h>

int main()
{
    int i,num = 21;
    int flag= 1;
    
    
    // 0, 1 and negative numbers are not prime
    if(num < 2){
        flag = 0;
    }
    else{   
        // shouldn't have any divisors in b/w 2 & num-1 
        for(i=2; i < num; i++)
        {
            if(num % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("%d is Prime", num);
    else
        printf("%d is not Prime", num);
 
    return 0;
}