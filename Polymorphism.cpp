#include <iostream>
using namespace std;
class Person{
public :
    void display(){
    cout<<"I am a Person"<<endl;
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
    cout<<"I am a teacher "<<endl;
    }
};
int main(){
    Person Pranto;
    Pranto.display();
    Student Udoy;
    Udoy.display();
    Teacher Mehedi;
    Mehedi.display();


return 0;
}
