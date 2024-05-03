// Dynamic memory allocation of 2-D arrays

// Error in program


#include <iostream>
using namespace std;

int main() {

    int n = 2;
    int m = 3;

    int ** arr = new int * [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }


    // int ** arr = new int * [n];
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;


    return 0;
}