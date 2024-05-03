#include<iostream>
using namespace std ;

int main(){

    int a[5];      //initalising a array of interger type

    for (int i = 0; i<5; i++){
        cin >> a[i];   // taking input from user
    }
    
    for(int  i = 0; i<5; i++){
        cout << a[i] << "  " ;  
    }
    return 0;
}