#include<iostream>
using namespace std;
class Power
{
    public:
    int exponent,base;
    
};
int main()
{
    Power p1;
    int answer = 1;
    cout<<"Enter base: ";
    cin>>p1.base;
    cout<<"Enter The Expo:";
    cin>>p1.exponent;
    for (int i = 1; i <= p1.exponent;i++){
    answer = answer * p1.base;
    }
    cout<<p1.base<<"^"<<p1.exponent<<"="<<answer;
    
    

    return 0;
}