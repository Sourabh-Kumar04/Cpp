// Dangling  Pointer : Deallocation Of memory
// Deallocating a memory pointed by a pointer causes a dangling pointer.

#include <iostream>
using namespace std;

int main(){

    // Dynamic Memmory Allocation
    int* p = (int*) malloc(sizeof(int));

    //after calling free() p becomes a dangling pointer
    free(p);

    // now p no more a dangling pointer
    p = NULL;

    return 0;
     
}

