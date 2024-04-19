#include <iostream>
using namespace std;
class complex{
private:
    int real,image;
public:
   complex(){
   real=0;
   image=0;
   }
    complex(int r, int i){
    real=r;
    image=i;

    }
    void print(){
    cout<<real<<" + "<<image<<endl;
    }
     complex operator +(complex c){
    complex temp;
    temp.real=real+c.real;
    temp.image=image+c.image;
     return temp;
    }

};

int main(){
complex c1(5,4);
complex c2(2,3);
complex c3;
c3=c1+c2;
c3.print();
return 0;
}

