// Wild Pointer :  A pointer behaves like a wild pointer when declared but not initialized. So, they point to any random memory location.

#include <iostream>
using namespace std;

int main(){

    int* p;    // wild Pointer
    int a = 10;   

    cout << "value of a: " << a << endl;
    cout << "Address that pointer p is pointing to: " << & a << endl; 
    cout << * p << endl;    // garbage value (beacuse wild pointer)


    p = & a;   // p is not a wild pointer now
    * p = 12;  // value of a is changed from 10 to 12

    cout << "value of a: " << a << endl;
    cout << "Address that pointer p is pointing to: " << & a << endl; 
    cout << * p << endl;

}