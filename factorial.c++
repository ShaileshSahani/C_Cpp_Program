#include <iostream>  
using namespace std;  
int main() {  
float numbers[] = {7, 5, 6, 12, 35, 27};
float sum = 0;
int count = 0;
double average;
cout << "The numbers are: "; 
for (const int &n : numbers){  
cout << n << "  ";  
sum += n;    
count++;  
}   
cout << "\nTheir Sum = " << sum << endl;
average = sum / count;  
cout << "Their Average = " << average << endl;
  return 0;  
}  
