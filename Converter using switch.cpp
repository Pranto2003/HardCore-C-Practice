#include <iostream>
using namespace std;
int main()
{
    double a,b,c,d,m,km,k,ft;
    char choice;
    cout<<"1. cm to m"<<endl;
    cout<<"2. m to km"<<endl;
    cout<<"3. celsius to kelvin"<<endl;
    cout<<"4. inch to ft"<<endl;
    cout<<"Choose any option : "<<" ";
    cin>>choice;

    switch (choice)
    {

    case '1':
        cout<<"cm to m"<<endl;
        cout<<"cm= "<<" ";
        cin>>a;
        m=a/(double)100;
        cout<<a<<" means " << m<<" meter"<<endl;
        break;

    case '2':
        cout<<"m to km"<<endl;
        cout<<"m= "<<" ";
        cin>>b;
        km=b/(double)1000;
        cout<<b<<" means " <<km<<" kilometer"<<endl;
        break;

    case '3':
        cout<<"celsius to kelvin"<<endl;
        cout<<"celsius= "<<" ";
        cin>>c;
        k=c+(double)273;
        cout<<c<<" means " <<k<<" kelvin"<<endl;
        break;

    case '4':
        cout<<"inch to ft"<<endl;
        cout<<"inch= "<<" ";
        cin>>d;
        ft=d/(double)12;
        cout<<d<<" means " <<ft<<" feet"<<endl;
        break;

    default:
        cout<<"Invalid response"<<endl;

    }

    return 0;
}


