// Constant variable

#include <iostream>
using namespace std;

int main() {

    const int a = 5;

    cout << "Value of a before increment:-> " << a << endl;

    a++;     // value of a cannot be modified (throw an error)

    cout << "Value of 'a' after increment: " << a  << endl;


    return 0;

}

// syntax of constant variable:->  const datatype variable_name = value;