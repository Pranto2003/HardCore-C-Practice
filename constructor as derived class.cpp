#include<iostream>
using namespace std;
class A
{
	int a;
public:
        A(int a=0)
        {
            this->a=a;
            cout<<"c for A= "<<a<<endl;
        }
        ~A()
        {
            cout<<"d for A= "<<a<<endl;
        }
};
class B
{
	int b;
public:
        B(int b=0)
        {
            this->b=b;
            cout<<"c for B= "<<b<<endl;
        }
        ~B()
        {
          cout<<"d for B= "<<b<<endl;
        }
};
class C:public A,public B
{
	int c;
public:
	C(int c=0):B(c*2),A(c*5)
	{
		this->c=c;
		cout<<"c for C= "<<c<<endl;
	}
	~C()
	{
		cout<<"d for C= "<<c<<endl;
	}
};
int main()
{
	C cc(3);
	{
		B bb(10);
		C *cc1;
		cc1=new C(5);
		delete cc1;
	}
	return 0;
}

