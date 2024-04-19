#include <iostream>
using namespace std;
int main(){
int p;
cout<<"Enter your desired number :"<<" ";
cin>>p;
for(int i=1; i<=p; i++){
    for(int j=i; j<=p; j++){
        cout<<j<<" ";
    }
    cout<<endl;
}

return 0;
}
