#include <iostream>
using namespace std;
int main(){
  int a[5];

  cout<<"Enter any integer numbers"<<endl;
  for(int i=1; i<=5; i++){
    cin>>a[i];
  }
  for(int i=5; i>=1; --i){
    cout<<a[i];
  }



    return 0;
}
