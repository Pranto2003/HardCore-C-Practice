#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char ch;



    cout<<"Which type of vehicle do you have?"<<endl;
    cin>>ch;
    switch(ch)
    {
    case'Car':
            cout<<"Park in 9q"<<endl;
        break;
    case'Bike':
            cout<<"Park in 11q"<<endl;
        break;
    case'Cycle':
            cout<<"Park in 8q"<<endl;
        break;

        default:

        cout<<"NO SERVICE"<<endl;
    }


    getch ();
}
