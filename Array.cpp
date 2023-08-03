#include <iostream>
using namespace std;
class Fibo{
    int a,b;
    public:
    Fibo(){
        a = 0;
        b = 1;
    }
    public:
    void fibo(){
        int i,t=0,n;
        cout<<"Enter";
        cin>>n;
        for ( i = 0; i < n; i++)
        {
            t = a+ b;
            cout<<t<<" ";
            a = b;
            b = t;
        }
        
    }
    
};

int main(){
  Fibo f;
  f.fibo();
}