#include <iostream>
using namespace std;
class NumCheck{
int n;
void ReadNo(){
    
    cout<<"Enter A Number:";
    cin>>n;
}
public:
int factorial(){
    ReadNo();
    int f = 1;
    while(n > 0){
        f = f * n;
        n--;
    }
    return f;
    
}

int isArmstrong(){
    ReadNo();
    int s = 0,temp = n,rem;
    while(n > 0){
        rem = n % 10;
        s += (rem * rem * rem);
        n = n / 10;
    }
    if (temp == s){
        return 1;
    } 
    else{
        return 0;
    }

}

int isPalindrome(){
    ReadNo();
    int s = 0,temp = n,rem;
    while(n > 0){
        rem = n % 10;
        s = (s * 10) + rem;
        n = n / 10;
    }
    if (temp == s){
        return 1;
    } 
    else{
        return 0;
    } 
}

int isReverse(){
    ReadNo();
    int s = 0,rem;
    while(n > 0){
        rem = n % 10;
        s = (s * 10) + rem;
        n = n / 10;
    }
    return s;
}
};

int main(){
    NumCheck object;
    int res;
    cout<<"\nTo Check The Factorial Of A Number:"<<endl;
    cout<<"--------------------------------\n\n";
    res = object.factorial();
    cout<<"Factorial:"<<res<<endl;

    cout<<"\nArmstrong Test:"<<endl;
    cout<<"--------------------------------\n\n";
    if(object.isArmstrong()){
        cout<<"It's An ArmStrong Number!"<<endl;
    }
    else{
        cout<<"It's Not An ArmStrong Number!"<<endl;
    }

    cout<<"\nPalindrome Test:"<<endl;
    cout<<"--------------------------------\n\n";
    if(object.isPalindrome()){
        cout<<"It's An Palindrome Number!"<<endl;
    }
    else{
        cout<<"It's Not An Palindrome Number!"<<endl;
    }

    cout<<"\nTo Check The Factorial Of A Number:"<<endl;
    cout<<"--------------------------------\n\n";
    res = object.isReverse();
    cout<<"Reverse:"<<res<<endl;

    return 0;
}