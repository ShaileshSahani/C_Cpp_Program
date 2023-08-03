#include<iostream>
#include<string.h>
using namespace std;
struct airline
{
    string passport;
    string name;
    string destination;
    string seat_no;
    string email;
    string phoneNumber; 
    
};

int onlineBooking(){
    
    airline s1;
    cout<<"Enter Your Name:";
    cin>>s1.name;
    cout<<"Enter Your Phone Number:";
    cin>>s1.phoneNumber;
    cout<<"Enter Your Passport Number";
    cin>>s1.passport;
    cout<<"Enter Your E-Mail";
    cin>>s1.email;
    cout<<"Enter Your Destination:";
    cin>>s1.destination;
    string data[50] = {s1.name,s1.phoneNumber,s1.passport,s1.email,s1.destination};
}
int display(){

}

int main(){
    airline obj;
    onlineBooking();
}
