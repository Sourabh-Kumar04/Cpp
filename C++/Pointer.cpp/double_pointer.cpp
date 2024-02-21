#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int* p = & a;      // pointer
    int** q = & p;     //pointer to pointer

    /* Next three statements will print same value i.e. Address of a  */
    cout << " & a :" << & a << endl;
    cout << " p : " << p << endl;
    cout << " * q : " << * q << endl;

    /* Next two statements will print same value i.e. Address of p  */
    cout << " & p :" << &p <<endl;
    cout << " q :" << q << endl;

    /* Next thrfee statements will print same value i.e. Value of a   */
    cout << "a :" << a << endl;
    cout << " * P :" << * p << endl;
    cout << " ** q :" << ** q << endl; 

    return 0;
}