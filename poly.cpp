#include <iostream>
using namespace std;
class Person{
public:
    virtual void multiplication(){
    cout<<"I am a person"<<endl;
    }
};
class Student:public Person{
public:
    void display1(){
    cout<<"I am a student"<<endl;
    }
};
class Teacher:public Person{
public:
    void display2(){
    cout<<"I am a teacher"<<endl;
    }
};

int main(){
  Person *Pranto;
  Student Udoy;
  Teacher Mehedi;
  Pranto=&Udoy;
  Pranto->display1();

  Pranto=&Mehedi;
  Pranto->display2();




return 0;
}
