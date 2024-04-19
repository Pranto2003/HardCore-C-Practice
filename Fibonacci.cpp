#include <iostream>
using namespace std;
int main(){
int first=0, second=1, fibo,a;
cout<<"Enter your range :"<<endl;
cin>>a;

for(int i=0; i<=a; i++){
    if (i<=1){
      fibo=i;
    }
    else {
        fibo=first+second;
        first=second;
        second=fibo;
    }
    cout<<fibo<<" ";
}

return 0;
}
