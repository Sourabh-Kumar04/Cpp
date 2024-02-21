// Daling Pointer : Function call
// The pointer pointing to the local variable becomes dangling when the local variable is not static.


#include <iostream>
using namespace std;

int* fun(){
    int x = 10;
    return & x;
}

int main(){

    int* p = fun();
    // p points to something which is not valid anymore

    cout << * p << endl;  // segmentation fault

    return 0;
}



/*
""Dangling Pointer: ""
A dangling pointer is a pointer pointing to a memory location that has been freed (or deleted). 
There are three different ways where Pointer acts as a dangling pointer.
a. Function Call
b. Deallocation of Memory
c. Variable goes out of scope

*/