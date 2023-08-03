#include <stdio.h>

int fact(int n){
    int fact = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        fact *= i;
    }
    return fact;
}
int armstrong(int n){
    int rem,sum=0;
    int tem = n;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + (rem*rem*rem);
        n = n / 10;
    }
    if(sum == tem){
        printf("%d Is An Armstrong Number",tem);
    }
    else{
        printf("%d Is Not A Armstrong Number",tem);
    }
    return 0;
}

int palindrome(int n){
    int sum = 0,rem;
    int temp = n;
    while (n != 0)
    {
        rem = n % 10;
        sum = (sum * 10) + rem;
        n /= 10;
    }
    if (sum == temp){
        printf("%d Is Palindrome",sum);
    }
    else{
        printf("%d Is Not A Palindrome",temp);
    }
    return 0;
}

int reverse(int n){
    int sum = 0,rem;
    int temp = n;
    while (n != 0)
    {
        rem = n % 10;
        sum = (sum * 10) + rem;
        n /= 10;
    }
    printf("Reverse:%d",sum);
    return 0;
}

int sumOfN(n){
    int sum = 0,s;
    for(int i = 1;i <= n; i++){
        sum=sum+i;
    }
    //DSA code//
    s = n * (n + 1) / 2;
    printf("Sum Of Number:%d",s);
    return 0;
}

int countOfDig(int n){
    int c = 0,rem;
    while (n > 0)
    {
        rem = n % 10;
        c++;
        n = n / 10;
    }
    printf("Count Of Digits:%d",c);
    return 0;
    
}
int SumOfDig(int n){
    int rem,sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    printf("Sum Of Digits:%d",sum);
    return 0;
    
}

int Strong(int n){
    int rem,sum = 0;
    int tem = n;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + fact(rem);
        n /= 10;
    }
    if (sum == tem){
        printf("%d Is Strong Number",sum);
    }
    else{
        printf("%d Is Not A Strong Number",n);
    }
    return 0;
    
}
void main(){
int x;
printf("Enter A Number:");
scanf("%d",&x);

printf("Factorial:%d",fact(x));
printf("\n\n");

armstrong(x);
printf("\n\n");

palindrome(x);
printf("\n\n");

reverse(x);
printf("\n\n");

sumOfN(x);
printf("\n\n");

countOfDig(x);
printf("\n\n");

SumOfDig(x);
printf("\n\n");

Strong(x);
}