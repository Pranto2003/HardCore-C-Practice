#include <iostream>
using namespace std;
int main()
{
    int p,sum;
    cout<<"Enter your desired number between 1-10"<<endl;
    cin>>p;

    for(int i=p; i<=100; i++)
    {
        for(int j=2; j<p; j++)
        {
            if(i%j==0)
            {
                sum=i;
                sum=sum+i;


            }

        }
    }
    cout<<"Sum of prime  numbers is : "<<sum<<endl;


    return 0;
}
