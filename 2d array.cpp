#include <iostream>
using namespace std;
int main(){

    int P[2][3]={

                {10,20,30},
                {40,50,60}

    };

    for(int row=0; row<2; row++){

        for(int col=0;col<3;col++){

            cout<<P[row][col]<<"  ";

        }
 cout<<endl;
    }





return 0;
}
