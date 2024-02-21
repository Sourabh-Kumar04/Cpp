#include <iostream>
using namespace std;

int main(){

    char ch = 'q';
    cout << "Size of ch" << sizeof(ch) <<endl;

    char* a = &ch;
    cout << "Size of a" << sizeof(a) <<endl;

    int* i = new int;
    cout << "Size of i" << sizeof(i) << endl;

    int* j;
    cout << "Size of j" << sizeof(j) << endl;

    return 0;
    
}