#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main() {

 float num1,num2;

 cout<<"Enter 2 numbers:"<<endl;
 cin>>num1>>num2;
 cout<<showpoint<<endl;
 cout<<fixed<<endl;
 cout<<setprecision(10)<<endl;

float sum=num1 + num2;
 cout<<setw (20)<<"Sum is:"<<sum<<endl;

 cout<<noshowpoint<<endl;
float sub=num1 - num2;
 cout<<setw (20)<<"Subtraction is:"<<sub<<endl;

float mul=num1 * num2;
 cout<<setw (20)<<"Multiplication is:"<<mul<<endl;

 double div= (float) num1 / num2;
 cout<<setw (20)<<"Division is:"<<div<<endl;

 //float rem=num1 % num2;
 //cout<<"Remainder is:"<<rem<<endl;




getch ();
}

