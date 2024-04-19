#include <iostream>
using namespace std;
class A{
public:
    A(){
    cout<<"Constructor of A"<<endl;
    }
   virtual ~A(){
    cout<<"Destructor of A"<<endl;
    }

};
class B:public A{
public:
    B(){
    cout<<"Constructor of B"<<endl;
    }
    ~B(){
    cout<<"Destructor of B"<<endl;
    }

};
int main(){
A *aa=new(B);
delete aa;
return 0;
}
