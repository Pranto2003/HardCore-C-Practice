#include <iostream>
using namespace std;

    int main()
    {
    	int rad1;
    	float volume;
		cout << "\n\n Calculate the volume of a sphere :\n";
		cout << "---------------------------------------\n";
        cout<<" Input the radius of a sphere : ";
    	cin>>rad1;
    	volume=(4*3.14*rad1*rad1*rad1)/3;
        cout<<" The volume of a sphere is : "<< volume << endl;

        return 0;
    }
