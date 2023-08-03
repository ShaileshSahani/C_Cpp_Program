#include <iostream>
using namespace std;
// inline function // 
inline int getvalue(int n){ // with parameter with return type//
    int fact = 1;
    for(int i = 1;i <= n; i++){
        fact *= i;
    }
    return fact;
}

// without inline//
int getvalue1(int n){ // with parameter with return type//
    int fact = 1;
    for(int i = 1;i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int x = 5;
    cout<<"\nUsing inline function result:"<<getvalue(x)<<endl;//result = 120;
    cout<<"\nWithOut using inline function:"<<getvalue1(x)<<endl;//result = 120;
}