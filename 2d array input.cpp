#include <iostream>
using namespace std;
int main(){

    int P[2][3];

cout<<"Enter the elements "<<endl;
  for(int row=0; row<2; row++){

        for(int col=0;col<3;col++){

            cout<<"A["<<row<<"]["<<col<<"]= ";
            cin>>P[row][col];
        }

    }


  for(int row=0; row<2; row++){

        for(int col=0;col<3;col++){

            cout<<P[row][col]<<"  ";
        }
        cout<<endl;
    }





return 0;
}

