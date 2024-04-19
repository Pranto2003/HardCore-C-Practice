#include <iostream>
using namespace std;
class Person{
public:
    virtual void display(){
    cout<<"I am a person"<<endl;
    }
};
class Student:public Person{
public:
    void display(){
    cout<<"I am a student"<<endl;
    }
};
class Teacher:public Person{
public:
    void display(){
    cout<<"I am a teacher"<<endl;
    }
};

int main(){
  Person *Pranto;
  Person Rafi;
  Student Udoy;
  Teacher Mehedi;

  Pranto=&Rafi;
  Pranto->display();

  Pranto=&Udoy;
  Pranto->display();

  Pranto=&Mehedi;
  Pranto->display();




return 0;
}
