// Updation of array elemnets

#include <iostream>
using namespace std;

int main()  {
    
    int arr[3];

    // insertion elements in a arrray
    arr[0] = 10;
    arr[1] = 15;
    arr[2] = 17;

    // Before Updation printing elements of the array
    cout << "arr[0] : " << arr[0] << endl;
    cout << "arr[1] : " << arr[1] << endl;
    cout << "arr[2] : " << arr[2] << endl;

    // updation of array elements
    arr[0] = 13;
    arr[1] = 10;
    arr[2] =5;

    // After Updation printing elements of the array
    cout << "arr[0] : " << arr[0] << endl;
    cout << "arr[1] : " << arr[1] << endl;
    cout << "arr[2] : " << arr[2] << endl;

    return 0;
}
