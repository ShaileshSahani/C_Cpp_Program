#include "iostream"
using namespace std;

class employee{
char name[20];
long int salary;
int age;
char department[10];
public:
void GetInfo(){
    cout<<"Enter The Name:";
    cin>>name;
    cout<<"\nEnter The Salary:";
    cin>>salary;
    cout<<"\nEnter The Age:";
    cin>>age;
    cout<<"\nEnter The Department:";
    cin>>department;
}

int display(){
    cout<<"\nEMPLOYEE INFORMATION\n";
    cout<<"________________________"<<endl;
    cout<<"NAME:"<<name<<endl;
    cout<<"SAlARY:"<<salary<<endl;
    cout<<"AGE:"<<age<<endl;
    cout<<"DEPARTMENT:"<<department<<endl;
    cout<<"GROSS SALARY:"<<salary+(salary*0.6)+(salary*0.4);
    return 0;
}
};
int main(){
    employee e1;
    e1.GetInfo();
    e1.display();
    return 0;
}
