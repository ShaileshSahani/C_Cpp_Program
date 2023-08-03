#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter The nth term:";
    cin>>n;
    if (n < 1){
        return (-1);
    }
    else if (n == 1)
    {
        return 1;
    }
    else{
        cout<<"Prime Number:";
        for(int i=2; i<=n; i++){
            int flag = 0;
            for(int j=2; j<i;j++){
                if(i%j==0){
                    flag++;
                    break;
                }
            }
            if (flag == 0){
                cout<<i<<" ";
            }

        }
    }
    
    
}