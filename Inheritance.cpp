#include <iostream>
using namespace std;
class Person{
public :
    int id;
    string name;
    void display(){
    cout<<"ID :"<<id<<endl;
    cout<<"Name :"<<name<<endl;
    }

};
class Student:public Person{
public:
    int age;
    void display2(){
    cout<<"Age :"<<age<<endl;
     display();
    }

};

int main(){
Student pranto;
pranto.id=49146;
pranto.name="Pranto";
pranto.age=19;
pranto.display2();

return 0;
}
