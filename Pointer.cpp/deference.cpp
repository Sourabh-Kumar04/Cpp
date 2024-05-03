//  Logic solution 

#include <iostream>   //why this error
using namespace std;

int main(){

    int firstvalue = 5 ;
    int secondvalue = 15;
    char thirdvalue = 'a';

    int* p1 = & firstvalue;   // p1 = address of the firstvalue
    int* p2 = & secondvalue;   // p2 = address of the  
    char* p3 = & thirdvalue;

    *p1 = 10;
    *p2 = *p1;

    p1 = p2;

    *p1 = 20;
    *p3 = 'b';


    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;

    cout << "p1 is " << p1 << endl;  //address
    cout << "p2 is " << p2 << endl;   // address
    cout << "p3 is " << p3 << endl;   // value

    cout << "*p1 is " << *p1 << endl;  //value
    cout << "*p2 is " << *p2 << endl;   // value
    cout << "*p3 is " << *p3 << endl;    // value

    cout << "&p1 is " << &p1 << endl;   // address
    cout << "&p2 is " << &p2 << endl;    // address   // why not same address of the p1 
    cout << "&p3 is " << &p3 << endl;   // address



    return 0;
}