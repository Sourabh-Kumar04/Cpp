// Void pointer

#include <iostream>
using namespace std;

int main(){

    void* ptr;
    int i = 10;

    // assign int address to void
    ptr = & i;
    cout << "Address of variable i " << & i << endl;
    cout << "Address where the void pointer is pointing " << ptr << endl;           //same output i.e. address that of below
    cout << "Address where the void pointer is pointing " << (int*) ptr << endl;    // same output i.e. address that of above

    // value to pointer
    cout << i << endl;   
    
    return 0; 
}


/* 

Note:
1. void pointers cannot be dereferenced. It can, however, be done using typecasting the void pointer.
2. Pointer arithmetic is not possible on pointers of void due to lack of concrete value and size.
3. A void pointer can hold an address of any type and can be typecasted to any type.

*/