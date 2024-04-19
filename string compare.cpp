#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name1[]="Pranto";
    char name2[]="Goswamee";

    int value = strcmp(name1,name2);
                if (value==0)
    {
        cout<<"The strings are equal";
    }
    else
    {
        cout<<"Strings are not equal";
    }

    return 0;
}
