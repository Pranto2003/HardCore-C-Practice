#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks here :"<<" ";
    cin>>marks;

    if (marks>89 && marks<=100)
    {
        cout<<"Congratulations! You got A+ (4.00)"<<endl;
    }
    else if (marks>84 && marks<=89)
    {
        cout<<"Congratulations! You got A (3.75)"<<endl;
    }
    else if (marks>79 && marks<=84)
    {
        cout<<"Congratulations! You got B+ (3.5)"<<endl;
    }
    else if (marks>74 && marks<=79)
    {
        cout<<"Congratulations! You got B (3.25)"<<endl;
    }
    else if (marks>69 && marks<=74)
    {
        cout<<"Congratulations! You got C+ (3.00)"<<endl;
    }
    else if (marks>64 && marks<=69)
    {
        cout<<"Congratulations! You got C (2.75)"<<endl;
    }
    else if (marks>59 && marks<=64)
    {
        cout<<"Congratulations! You got D+ (2.50)"<<endl;
    }
    else if (marks>49 && marks<=59)
    {
        cout<<"Congratulations! You got D (2.25)"<<endl;
    }
    else if (marks<50)
    {
        cout<<"Better luck next time"<<endl;
    }

    return 0;
}
