// Address of a pointer

#include <iostream>
using namespace std;

int main(){

    int  i = 5;
    int* p;
    p = & i;

    cout << "Address of the variables i is " << p << endl;
    cout << "Address of the Pointer p is " << & p;

    return 0;
}