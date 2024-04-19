#include <iostream>
using namespace std;
class Shape{
protected:
    int dim;
public:
    void setdim(int x){
    dim=x;
    }
    virtual void area()=0;

};
class Rectangular :public Shape{
public:
    void area(){
    cout<<"The area Rectangular :"<<dim*dim<<endl;
    }
};
class Circle:public Shape{
public:
    void area(){
    cout<<"The area of circle is :"<< 3.14*dim*dim<<endl;
    }
};

int main(){
Rectangular rec;
Circle cir;
rec.setdim(5);
rec.area();
cir.setdim(5);
cir.area();

return 0;
}
