#include <iostream>
using namespace std;
class MobileUser{
public:
    virtual void sendMessage()=0;
};

class Pranto:public MobileUser{
public:
    void sendMessage(){
    cout<<"Hi, I am Pranto"<<endl;
    }
};
class Udoy:public MobileUser{
public:
    void sendMessage(){
    cout<<"Hi, I am Udoy"<<endl;
    }
};
class Abid:public MobileUser{
public:
    void sendMessage(){
    cout<<"Hi, I am Abid"<<endl;
    }
};

int main(){
    MobileUser *m;
    Pranto p;
    Udoy u;
    Abid a;
    m=&p;
    m->sendMessage();
    m=&u;
    m->sendMessage();
    m=&a;
    m->sendMessage();

return 0;
}
