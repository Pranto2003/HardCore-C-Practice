#include <iostream>
using namespace std;
class M{
protected:
    int m;
public:
    void setdata(int x){
    m=x;
    }
    void display(){
        cout<<"M :"<<m<<endl;
    }

};
class N{
protected:
    int n;
public:
    void setdata(int x){
    n=x;
    }
    void display(){
    cout<<"N :"<<n<<endl;
    }

};
class P:public M, public N{
public:
    void display(){
    M::display();
    N::display();
    }

};

int main(){
P pp;
pp.M::setdata(10);
pp.N::setdata(20);
pp.display();


return 0;
}
