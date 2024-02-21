#include <iostream>
using namespace std;

int main(){

    char* mychar;
    int* myint;
    long* mylong;
    short* myshort;
    float* myfloat;

    cout << "mychar :" << mychar << endl;  // Output: â─↑[├1█δ☻ë├ìC☺ï¶àP?@
    cout << "myint :" << myint << endl;    // Output: 0x61ff50
    cout << "mylong :" << mylong << endl;     // Output: 0x401cf0
    cout << "myshort :" << myshort << endl;   // Output: 0x77606f2d
    cout << "myfloat :" << myfloat << endl;   // Output: 0x61ff08

    cout << "*mychar :" << *mychar << endl;   // Output: â
    cout << "*myint :" << *mylong << endl;    // Output: 1077940385
    cout << "*myshort :" << *myshort << endl;    // Output: -9993
    cout << "*myfloat :" << *myfloat << endl;    // Output: 8.99963e-039

    cout << "&mychar :" << &mychar << endl;      // Output: 0x61ff0c
    cout << "&myint :" << &myint << endl;        // Output: 0x61ff08
    cout << "&mylong :" << &mylong << endl;      // Output: 0x61ff04
    cout << "&myshort :" << &myshort << endl;    // Output: 0x61ff00
    cout << "&myfloat :" << &myfloat << endl;    // Output: 0x61fefc

    cout << "++mychar :" << ++mychar << endl;  // Output: ─↑[├1█δ☻ë├ìC☺ï¶à░A@
    cout << "++myint :" << ++myint << endl;    // Output: 0x61ff54
    cout << "++mylong :" << ++mylong << endl;     // Output: 0x401f54
    cout << "++myshort :" << ++myshort << endl;   // Output: 0x77606f2f
    cout << "++myfloat :" << ++myfloat << endl;   // Output: 0x61ff0c

    cout << "mychar++ :" << mychar++ << endl;  // Output: ─↑[├1█δ☻ë├ìC☺ï¶à░A@ 
    cout << "myint++ :" << myint++ << endl;    // Output: 0x61ff54
    cout << "mylong++ :" << mylong++ << endl;     // Output: 0x401f54
    cout << "myshort++ :" << myshort++ << endl;   // Output: 0x77606f2f
    cout << "myfloat++ :" << myfloat++ << endl;   // Output: 0x61ff0c


    return 0;
}