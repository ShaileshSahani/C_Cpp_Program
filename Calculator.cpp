#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int result,n,a,b;
    do
    {
       
        cout<<"Choice 1.Addition 2.Subtraction\n 3.Multiplication 4.Division\n 5.Square 6.Square root\n 7.Exit";
        cout<<"Enter your choice:";
        cin>>n;
        switch(n)
        {
            case 1:
            cout<<"Enter a number:";
            cin>>a>>b;
            result=a+b;
            cout<<"Addition of "<<result;
            break;

            case 2:
            cout<<"Enter a number:";
            cin>>a>>b;
            result=a-b;
            cout<<"Subtraction of "<<result;
            break;

            case 3:
            cout<<"Enter a number:";
            cin>>a>>b;
            result=a*b;
            cout<<"Multiplication of "<<result;
            break;

            case 4:
            cout<<"Enter a number:";
            cin>>a>>b;
            result=a/b;
            cout<<"Division of "<<result;
            break;

            case 5:
            cout<<"Enter a number:";
            cin>>a;
            result=a*a;
            cout<<"Addition of "<<result;
            break;

            case 6:
            cout<<"Enter a number:";
            cin>>a;
            result=sqrt(a);
            cout<<"Addition of "<<result;
            break;

            case 7:
            cout<<"You exit";
            break;

            default:
            cout<<"Invalid input";
        
        }
    
    }while(n!=7);

return 0;
}