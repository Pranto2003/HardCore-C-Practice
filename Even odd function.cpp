#include <iostream>
using namespace std;
void even_or_odd(int x)
{

    if(x%2==0)
    {
        cout<<"The number is even"<<endl;
    }
    else
    {
        cout<<"The number is odd"<<endl;
    }
}

int main()
{
    even_or_odd(10);

    return 0;
}
