// calloc dynamic memory allocation
// syntax of calloc:->  data_type* calloc(size_t num, sizeof(data_type));

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int* ptr = (int*) calloc(5, sizeof(int));

    for(int i = 0; i < 5; i++){
        /* ptr[i] and *(ptr+i) can be used interchangeably */
        cout << ptr[i] << endl;
    };

    free(ptr);

    return 0;
}

/* 
calloc() function in c++
The calloc() function works same as that of malloc with the only difference being that it sets all the bits of the allocated memory to zero and returns a pointer to the allocated memory block’s first byte if the allocation succeeds.

 */