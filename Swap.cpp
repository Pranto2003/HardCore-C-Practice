#include <iostream>
using namespace std;
int main (){

int var1,var2,a;

a=var1;
var1=var2;
var2=a;

cout<<"Enter your numbers :"<<endl;
cin>>var1>>var2;

cout<<"Your first value is "<<var1<<endl;
cout<<"Your second value is "<<var2<<endl;


return 0;
}
