// Handling any type of Exception

#include <iostream>
using namespace std;

int main() {

    try{

        int age = 12;

        if (age >= 18){
            cout << "You are eligible to vote.";
        }       

        else{
            throw -1;
        }
    }

    catch(...) { // catch all type of error

        cout << "Sorry, you are not eligible to vote" << endl;
        // cout << "Your age is :" << age  << endl;
    }


}