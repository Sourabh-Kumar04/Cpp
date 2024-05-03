// Dynamic memory allocation
// syntax of malloc function:->  data_type* malloc(size_t sizeof(data_type));


#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n =5;
    int* ptr = (int * ) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++){
        ptr[i] = i * 2;
    }

    for (int i = 0; i < n; i++){
        /* ptr[i] and *(ptr+i) can be used intechangeably */
        cout << ptr [i] << endl;
    }
   
   free(ptr);
   return 0;

}