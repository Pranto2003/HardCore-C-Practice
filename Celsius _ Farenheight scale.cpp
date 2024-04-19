#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double cels,faren;
    cout<<"Enter celsius"<<endl;
    cin>>cels;
    faren= 1.8*cels + 32;
    cout<<"Farenheight:"<<faren<<endl;
    cout<<endl;

    cout<<"Enter Farenheight"<<endl;
    cin>>faren;
    cels=(faren-32)/1.8;
    cout<<"Celsius:"<<cels<<endl;




    getch ();
}
