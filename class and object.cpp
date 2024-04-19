#include <iostream>
using namespace std;
class person{
int a;
float b;
public:
    void info(int id, float cgpa){
    a=id;
    b=cgpa;

    }
public:
    void comment(void){
    cout<<"You are selected for next semester"<<endl;
    }

};

int main(){

person Pranto;
Pranto.info(49146, 4.00);
Pranto.comment();

return 0;
}
