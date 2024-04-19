#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter your number:"<<endl;
    cin>>a>>b>>c;

    if (a>b && a>c && b>c)
    {
        cout<<"Greatest:"<<a<<endl;
        cout<<"Medium:"<<b<<endl;
        cout<<"Smallest:"<<c<<endl;
    }
    else if (a<b && a<c && b<c)
    {
      cout<<"Greatest:"<<c<<endl;
      cout<<"Medium:"<<b<<endl;
      cout<<"Smallest:"<<a<<endl;
    }
     else if (b>a && b>c && a>c)
    {
      cout<<"Greatest:"<<b<<endl;
      cout<<"Medium:"<<a<<endl;
      cout<<"Smallest:"<<c<<endl;
    }
     else if (b<a && b<c && a<c)
    {
      cout<<"Greatest:"<<c<<endl;
      cout<<"Medium:"<<a<<endl;
      cout<<"Smallest:"<<b<<endl;
    }
     else if (c>a && c>b && a>b)
    {
      cout<<"Greatest:"<<c<<endl;
      cout<<"Medium:"<<a<<endl;
      cout<<"Smallest:"<<b<<endl;
    }
     else if (c<a && c<b && a<b)
    {
      cout<<"Greatest:"<<b<<endl;
      cout<<"Medium:"<<a<<endl;
      cout<<"Smallest:"<<c<<endl;
    }
    return 0;
}

