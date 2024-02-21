#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int b = a;     // only value is copied i.e. different memory location

    a++;

    // both have differnt value (output) 
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
    
}



/*
Advantages of Pass by reference:
1. Reduction in-memory storage.
2. Changes can be reflected easily.
*/