#include <iostream>

using namespace std;

int main(void) {
  int a, b, c, temp1, temp2, temp3;
  cout<<"Enter your numbers "<<endl;
  cin >> a >> b >> c;

  if (a > c) {

    temp1 = a;
    a = c;
    c = temp1;
  }
  if (a > b) {
    temp2 = a;
    a = b;
    b = temp2;
  }
  if (b > c) {
    temp3 = b;
    b = c;
    c = temp3;
  }

  cout << "the smallest number is : " << a << endl;
  cout << "the middle number is : " << b << endl;
  cout << "the biggest number is : " << c << endl;
  return 0;
}
