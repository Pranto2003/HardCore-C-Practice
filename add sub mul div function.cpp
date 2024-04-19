#include <iostream>
using namespace std;

 float add(float a, float b)
{

    return a+b;

}

 float sub(float a, float b)
{

    return a-b;

}

 float mul(float a, float b)
{

    return a*b;

}
float div(float a, float b)
{

    return a/b;

}


int main()
{
float a,b;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
float add_result=add(a,b);
float sub_result=sub(a,b);
float mul_result=mul(a,b);
float div_result=div(a,b);


cout<<"The sum is "<<add_result<<endl;
cout<<"The substration is "<<sub_result<<endl;
cout<<"The multiplication is "<<mul_result<<endl;
cout<<"The division is "<<div_result<<endl;

    return 0;
}
