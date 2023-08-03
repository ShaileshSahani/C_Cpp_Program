#include<iostream>
using namespace std;
int main()
{
    int h,m,s;
    cout<<"Enter the hours:";
    cin>>h;
    m=h*60;
    s=h*360;
     
    cout<<"There are "<<m<<" minutes in "<<h<<" hours"<<endl;
    cout<<"The are "<<s<<" seconds in "<<h<< " hours";
    return 0;

}
