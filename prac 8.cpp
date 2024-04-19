#include <iostream>
using namespace std;
class base {
public:
virtual void show()
{  cout << "show base"<<endl;  }};
class derived1 : public base
{
public:
   void show()
{ cout << "show derived 1"<<endl;   }};
class derived2 : public derived1 {};

int main() {
   base b1;
  derived1 d1;
	derived2 d2;
   base *pb = &b1;
   pb->show();
   pb = &d1;
   pb->show();
   pb = &d2;
   pb->show();
   return 0;
}

