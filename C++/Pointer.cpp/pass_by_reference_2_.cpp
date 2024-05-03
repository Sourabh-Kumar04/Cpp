// pass by refernce or pass by value

#include <iostream>
using namespace std;

int main(){

    int  a = 5;
    int & b = a;    //means  variable 'a' and 'b' pointing ton same address in memory location

    a++;

    // both of them show same output
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;

}