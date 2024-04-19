#include <iostream>
using namespace std;
int main(){

int *p1,*p2,*p3;
int x,y,z;
cout<<"Enter three numbers here :"<<endl;
cin>>x>>y>>z;
p1=&x;
p2=&y;
p3=&z;

if(*p1>*p2 && *p1>*p3){
    cout<<"The greatest number is :"<<*p1<<endl;
}
 else if(*p2>*p1 && *p2>*p3){
    cout<<"The greatest number is :"<<*p2<<endl;
}
else{
    cout<<"The greatest number is :"<<*p3<<endl;
}



return 0;
}
