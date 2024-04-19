#include <iostream>
using namespace std;
int main ()
{
  int marks[5];

  for(int p=0; p<5; p++){

    cout<<"Marks for student " <<p+1<<" = ";
    cin>>marks[p];
  }

  cout<<"Marks are: ";
  for(int p=0; p<5; p++){
    cout<<marks[p]<<" ";
  }

    return 0;
}

