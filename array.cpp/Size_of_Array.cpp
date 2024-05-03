// Find the size ogf the array

#include <iostream>
using namespace std;

int main() {
    
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // size of one element
    cout << "Size of arr[0] : " << sizeof(arr[0]) << endl;

    // size of the array
    cout << "Size of the arr[] : " << sizeof(arr[]) << endl;

    // length of array
    cout << "Length of Array : " << sizeof(arr)/sizeof(arr[0]) << endl;

    return 0;

}