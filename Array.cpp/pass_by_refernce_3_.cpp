// pass by value or refernce in  function call

#include <iostream>
using namespace std;

void fun(int & a){

    a++;

}


int main(){

    int a = 5;
    cout << "a = " << a << endl;
    
    fun(a);

    cout << "a = " << a << endl;

    return 0;
}