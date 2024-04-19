#include <iostream>
using namespace std;
class Shape{
public:
float width,height;
void setdata(float a, float b){
width=a;
height=b;

}
};
class Rectangular:public Shape{
public:

    float setdata(){

    }
    float area(float a, float b){
    float ar=a*b;
    cout<<"Area of Rectangular :"<<ar<<endl;
    return a,b;
    }
};
class Triangular:public Shape{
public:
     void setdata(){

     }
    float area(float a, float b){
    float ar1=a*b;
    float ar2=0.5*ar1;
    cout<<"Area of Triangular :"<<ar2<<endl;
    return a,b;
    }
};
int main(){
    float a,b;
    cout<<"Enter the height and weight"<<endl;
    cin>>a>>b;
    Triangular Pranto;
    Pranto.setdata();
    Pranto.area(a,b);
    Rectangular Nishat;
    Nishat.setdata();
    Nishat.area(a,b);
return 0;
}
