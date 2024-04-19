#include<iostream>
using namespace std;

class M
{
protected:
	int m;

public:
int confusing;

void setdata(int x)
{
	confusing = m = x;
}

void display()
{
	cout<<m<<endl;
	cout<<confusing;
	cout<<endl;
}
};
class N
{
protected:
	int n;

public:
int confusing;

void setdata(int x)
{
	confusing = n = x;
}

void display()
{
	cout<<n<<endl;
	cout<<confusing;
	cout<<endl;

}
};

class P: public M, public N
{
public:
void display()
{
   M::display();
   N::display();
}



};
int main()
{
	P pp;
	pp.M::setdata(10);
	pp.N::setdata(20);
	pp.M::confusing=5;
	pp.display();
	return 0;
}
