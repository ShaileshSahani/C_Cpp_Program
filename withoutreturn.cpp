#include <iostream>
using namespace std;
// inline function // 
int getvalue(){ // without parameter without return type//
    int n = 5;
    int fact = 1;
    for(int i = 1;i <= n; i++){
        fact *= i;
    }
    cout<<"\nFactorial:"<<fact<<endl;
}

// without inline//
int getvalue1(){ // with parameter without return type//
int n;
    cout<<"Enter a number:";// take 5 for supposed result//
    cin>>n;//By taking user input//
    int fact = 1;
    for(int i = 1;i <= n; i++){
        fact *= i;
    }
    cout<<"\nFactorial by user input:"<<fact<<endl;
    
}

int main(){
    int x = 5;
    getvalue();//result = 120;
    getvalue1();//result = 120;
}