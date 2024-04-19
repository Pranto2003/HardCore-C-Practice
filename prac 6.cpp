#include <iostream>
using namespace std;
class A{
private:
    int real,image;
public:
    A(int r=0, int i=0){
    real=r;
    image=i;
    }
    void getdata(){
    cout<<"Real = "<<real<<endl;
    cout<<"Image = "<<image<<endl;
    }

    A operator +(A c){
    A temp;
    temp.real=real+c.real;
    temp.image=image+c.image;
    return temp;
    }


};
int main(){

   A c1(2,3);
   A c2(4,5);
   A c3;
   c3=c1+c2;
   c3.getdata();

return 0;
}
