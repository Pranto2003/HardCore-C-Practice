#include <iostream>
using namespace std;
int toUppercase(char alphabet){
int convert;
convert=alphabet;
convert=convert-32;
return convert;
}
int main(){
char alphabet;
cout<<"Enter any alphabet here"<<endl;
cin>>alphabet;
alphabet=toUppercase(alphabet);
cout<<alphabet;

return 0;
}
