#include <stdio.h>
void main(){
    int n = 21;
    int flag = 1;
    for(int i = 2 ; i <= n; i++){
        if(n % i == 0){
            flag = 0;
            break;
        }
    }
    if(flag){
        printf("%d is prime",n);
    }
    else
    printf("%d is ",n);
}