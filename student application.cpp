#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter number of students :";
    cin>>n;

    int students[n];
    for(int p=0; p<n; p++)
    {
        cout<<"Marks of student "<<p+1<<" =";
        cin>>students[p];
        sum=sum+students[p];

    }
    float avg=(float)sum/n;
    cout<<"Total marks of students :"<<sum<<endl;
    cout<<"Average :"<<avg;
    return 0;
}
