#include <iostream>
using namespace std;
int main(){

int n1,n2,rem,gcd,lcm;
cout<<"Enter 2 numbers:"<<endl;
cin>>n1>>n2;

while (n2!=0){

    rem = n1%n2;
    n1 = n2;
    n2 = rem;
}
 gcd =n1;
 lcm=(n1*n2)/gcd;

 cout<<"GCD="<<gcd<<endl;
 cout<<"LCM="<<lcm<<endl;


return 0;
}
