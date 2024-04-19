#include <iostream>
using namespace std;
class A{
public:
    A(int a){
    cout<<"a = "<<a<<endl;
    }
};
class B:public A{
public:
    B(int a, int c, int d):A(a){
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    }

};
int main(){
    B bb(3,4,5);

return 0;
}
