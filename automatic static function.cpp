#include <iostream>
using namespace std;
void auto_static (void){
int autoVar = 1;
static int staticVar = 1;
cout<<staticVar<<autoVar;
++autoVar;
++staticVar;
}
int main (void)
{
int i;
for ( i = 0; i < 5; ++i )
	auto_static ();
return 0;
}
