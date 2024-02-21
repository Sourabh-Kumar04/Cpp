
#include <iostream>
using namespace std;

int main(){

    char* ptr;
    char str[] = "abcdefg";
    ptr = str;
    ptr += 2;

    cout << ptr;  // output: cdefg

    return 0;

}