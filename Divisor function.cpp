#include <iostream>
using namespace std;
void divisor (int x)
{

for(int i=1; i<=x; i++){
    if (x%i==0){
        cout<<i<<endl;
    }
}

}

int main()
{

   divisor(10);

    return 0;
}

