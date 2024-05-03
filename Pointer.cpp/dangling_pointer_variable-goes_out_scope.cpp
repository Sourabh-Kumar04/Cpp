// Dangling Pointer: Variable goes out of scope
// When a pointer goes out of scope where it is valid, then it becomes a dangling pointer.




// learn again it













#include <iostream>
using namespace std;


int main(){

int* prt;
// Any code statement
{
    int ch;
    int* ptr;
    ptr = & ch;

}


// here ptr is dangling pointer

return 0;
} 

// int main(void){
//     int *ptr;

//     {
//         // New scope
//         int tmp = 17;
//         ptr = &tmp; // Just to see if the memory is cleared
//     }

//     //printf("tmp = %d", tmp); // Compile-time error (as expected)
//     printf("ptr = %d\n", *ptr);

//     return 0;
// }