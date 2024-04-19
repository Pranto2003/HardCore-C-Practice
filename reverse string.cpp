#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[30];
    cout<<"Enter any name here"<<endl;
    cin>>name;
    int length=strlen(name);
    for(int i=length; i>=0; i--)
    {
        cout<<name[i];
    }

    return 0;

}
