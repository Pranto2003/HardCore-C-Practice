#include <iostream>
using namespace std;
int main(){
int b;
int a[10];
a[0]=0;
a[1]=1;
cout<<"Enter your range :"<<endl;
cin>>b;
for(int i=2; i<b; i++){
    a[i]=a[i-2]+a[i-1];
}
for(int i=0; i<b; i++){
    cout<<a[i]<<" ";
}


return 0;
}
