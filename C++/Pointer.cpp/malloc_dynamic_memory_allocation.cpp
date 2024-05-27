<<<<<<< HEAD:C++/Pointer.cpp/malloc_dynamic_memory_allocation.cpp
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

=======
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

>>>>>>> de0168d (completed practicle program):Pointer.cpp/malloc_dynamic_memory_allocation.cpp
}