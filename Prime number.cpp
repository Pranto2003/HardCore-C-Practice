#include <iostream>
using namespace std;
int main(){
int p;
cout<<"Enter any number :"<<endl;
cin>>p;
for(int i=2; i<p; i++){
    if(p%i==0){
        cout<<"This is not a Prime number"<<endl;
        break;
    }
    else {
        cout<<"It is a Prime number"<<endl;
        break;
    }
}

return 0;
}
