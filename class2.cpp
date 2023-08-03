#include <iostream>
using namespace std;

class demo{
    float num1,num2;
    public:
    void getInput(){
        cout<<"Enter First Number:";
        cin>>num1;
        cout<<"Enter second Number:";
        cin>>num2;
    }

    void add(){
        getInput();
        cout<<"\nAddition:"<<num1 + num2;
    }

    void sub(){
        getInput();
        cout<<"\nSubtraction:"<<num1 - num2;
    }

    void mul(){
        getInput();
        cout<<"\nMultiplication:"<<num1 * num2;
    }

    void div(){
        getInput();
        cout<<"\nDivision:"<<num1 / num2;
    }
};
class demo2:public demo{
    public:
    void exit(){
        cout<<"You Exit";
    }
};

int main(){
    demo2 obj;
    int choice;
    do{
    cout<<"\n\n1.Addition\t2.Subtraction\n3.Multiplication\t"
              "\nEnter Your Choice:";
    cin>>choice;
    switch (choice)
    {
    case 1:
        obj.add();
        break;
    case 2:
        obj.sub();
        break;
    case 3:
        obj.mul();
        break;
    case 4:
        obj.div();
        break;
    case 5:
        obj.exit();
    default:
        cout<<"Invalid Input!!";
        break;
    }
    }while(choice != 5);
    
    
}

