#include <iostream>
using namespace std;
class A{
public:
  A(){
  cout<<"Constructor of A"<<endl;
  }
  A(int x, int y){
  cout<<"x"<<endl;
  cout<<"y"<<endl;
  }
};
class B:public A{
public:
    B(){
    cout<<"Constructor of B"<<endl;
    }
    B(int a, int b){
    cout<<"a"<<endl;
    cout<<"b"<<endl;
    }

};
int main(){
A aa;
A aa1(3,5);
B bb;
B bb1(4,3);

}
