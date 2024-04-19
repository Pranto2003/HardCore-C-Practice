#include <iostream>
using namespace std;
int main ()
{

    int p,row,col;

    cout<<"Enter number of lines:"<<endl;
    cin>>p;

    for(row=1; row<=p; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<<" "<<row;
        }
        cout<<endl;
    }

    return 0;
}
