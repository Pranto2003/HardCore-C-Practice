#include <iostream>
using namespace std;
class A{
public:
    A(){
    cout<<"Constructor of A"<<endl;
    }
    A(int a, int b){
    cout<<"Parameterised Constructor of A"<<endl;
    }
    ~A(){
    cout<<"Destructor of A"<<endl;
    }
};
class B:public A{
public:
    B(){
    cout<<"Constructor of B"<<endl;
    }
    B(int x, int y){
    cout<<"Parameterised Constructor of B"<<endl;
    }
    ~B(){
    cout<<"Destructor of B"<<endl;
    }

};
class C:public A,public B{
public:
    C(){
    cout<<"Constructor of C"<<endl;
    }
    C(int c, int d){
    cout<<"Parameterised Constructor of C"<<endl;
    }
    ~C(){
    cout<<"Destructor of C"<<endl;
    }

};
int main(){
A aa;
A aa1(3,4);
B bb;
B bb1(5,6);
C cc;
C cc1(7,8);
//compiler problem

return 0;
}
