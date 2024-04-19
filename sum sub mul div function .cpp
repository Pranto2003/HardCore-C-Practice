#include <iostream>
using namespace std;
void addition(int a, int b)
{
    int sum=a+b;
    cout<<"The sum is = "<<sum<<endl;
}
void subtraction(int a, int b)
{
    int sub=a-b;
    cout<<"The substraction is = "<<sub<<endl;
}
void multiplication(int a, int b)
{
    int mul=a*b;
    cout<<"The Multiplication is = "<<mul<<endl;
}
void division(int a, int b)
{
    float div=(float)a/b;
    cout<<"The division is = "<<div<<endl;
}
int main(){

addition(100,20);
subtraction(100,20);
multiplication(100,20);
division(100,20);


return 0;
}
