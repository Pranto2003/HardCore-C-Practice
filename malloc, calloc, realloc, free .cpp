#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int *ptr1,*ptr2;
    ptr1=(int*)malloc(20);
    ptr2=(int*)calloc(5, sizeof(int));

    if(ptr1==NULL || ptr2== NULL){
        cout<<"Memory allocation failed"<<endl;

    }
    else{
        cout<<"Memory allocation successful"<<endl;
       // free(ptr1);
        //cout<<"Memory freed successfully"<<endl;
        ptr1=(int*)realloc(ptr1, 50);
        cout<<"Memory Reallocation successful"<<endl;
    }


return 0;
}
