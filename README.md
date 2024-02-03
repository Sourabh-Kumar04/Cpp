# C & C++ concept

##  Why are arrays indexed from zero?
- Array is typically a contiguous area within the computer memory. In most languages, the variable that we use to refer to this array is inherently a pointer. A pointer that stores the starting address of the contiguous portion of memory.
- Let's take an example, say there's an integer array arr of 5 numbers in a language where every integer occupies 2 bytes of memory. Say, this array's contiguous area starts at byte address 44 and continues until 54 (requiring 10 bytes, i.e. 5 integers of 2 bytes each).
- Within this, when referring to arr[i] we are essentially looking up the memory location in a shorthand way.
  
   ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/92c5edcf-26e8-4862-adaa-767944c75eb8)

- What difference would it have made had it started at 1 instead of 0?
![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/b3cbd317-f05b-4d34-8af6-bcb3cd341f02)
- We would need to subtract 1 from every index we are accessing if we start indexing at 1. Looking keenly, we are offsetting from starting index to get every element. Using 0 as the index then means using an exact offset from starting point as the index whereas when using 1, we would have to compute the offset itself.

###### 1. Origin
+ Martin Richards, creator of the BCPL language (a precursor of C), designed arrays initiating at 0 as the natural position to start accessing the array contents in the language, since the value of a pointer p used as an address accesses the position p + 0 in memory.
+ BCPL was first compiled for the IBM 7094; the language introduced no run-time indirection lookups, so the indirection optimization provided by these arrays was done at compile time
+ The optimization was nevertheless important.


###### 2. Edsger W. Dijkstra
+ In 1982 Edsger W. Dijkstra in his pertinent note Why numbering should start at zero argued that arrays subscripts should start at zero as the latter being the most natural number.
+ Discussing possible designs of array ranges by enclosing them in a chained inequality, combining sharp and standard inequalities to four possibilities, demonstrating that to his **conviction zero-based arrays are best** represented by non-overlapping index ranges, which start at zero, alluding to open, half-open and closed intervals as with the real numbers.

###### 3. Programming language
+ C arrays, Java (arrays and lists0, and Lisp (lists and vectors) are indexed beginning with the zero subscript.
+ Particularly in C, where arrays are closely tied to pointer arithmetic, this makes for a simpler implementation.
+ **Fortran or COBOL**, have **array subscripts starting with one**, because they were meant as high-level programming languages, and as such they had to have a correspondence to the usual ordinal numbers which predate the invention of the zero by a long time.
+ **Pascal** allows the range of an array to be of any ordinal type (including enumerated types).
+ **APL** allows setting the index origin to **0 or 1 during runtime programatically**. Some recent languages, such as **Lua and Visual Basic**, have adopted the same convention for the same reason.
+ Zero is the lowest unsigned integer value, one of the most fundamental types in programming and hardware design. In computer science, zero is thus often used as the base case for many kinds of numerical recursion. Proofs and other sorts of mathematical reasoning in computer science often begin with zero. For these reasons, in computer science it is not unusual to number from zero rather than one.



###### 4. Why use 0 then?
  1. Using 0 allows us one less computation for accessing elements.
  2. It doen not matters much today.
  3. But probably it mattered in the early days of computing to have algorithms in the most efficient way.
  4. Maybe, it was an efficiency hack for ancient computers.
  5. The simple choice of 0-based indexing simplifies a lot of mathematics on arrays for programmers and allows for some elegant implementations of some concepts like hash tables, consistent hashing, and binary heaps.
  6. Nevertheless, more than a decision of computational efficiency or mathematical accuracy, **it is a matter of linguistic choice.**
  7. In recent years this trait has also been observed among many pure mathematicians, where many constructions are defined to be numbered from 0.
  8. If an array is used to represent a cycle, it is convenient to obtain the index with a modulo function, which can result in zero.


## Parameter Passing Technique in C/C++
- There are different parameter passing techniques like -
  1. Pass By Value
  2. Pass By Pointer
  3. Pass By Reference
  4. Pass By Result
  5. Pass By Value-Result
  6. Pass By Name
  7. Pass By Need

#### 1. Pass By Value
- This method uses **in-mode semantics.**
- Changes made to formal parameters do not get transmitted back to the caller.
- Any modifications to the formal parameter variable inside the called function or method affect only the separate storage location and will not be reflected in the actual parameter in the calling environment.
  
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/fede0c7e-7821-4e93-ad3a-a09e705fc0bd)
  
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/f32ceddc-3347-4ce2-95db-09036ee37f44)

- Shortcomings of Pass By Value:
  1. Inefficiency in storage allocation.
  2. For objects and arrays, the copy semantics are costly.

- c, C++ and Java support Pass  by Value.

#### 2. Pass By Pointer
- This technique uses a pointer.
- In function we pass memory address (pointer) of a variable rather than passing the actual value of variable.
- This passing technique allows the function to access and modify the content at that particular memory location.
  
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/6fd190bb-2c1b-4e77-aced-80dfaeb5b87c)
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/15b3ed4d-9cbe-4994-8a6e-502f53ecfff9)
- Shortcomings of Pass By Pointer
  1. Pointers can be null so null pointer Issues arises if properly not checked.
  2. If more than one pointers point to the same memory location then changes made by one pointer affect other the other pointers which points to same memory location.
  3. memory management should be done effectively using function like malloc and free.
 
#### 3. Pass By Reference
- The call by reference method of passing arguments to a function copies the reference of an argument into the formal parameter.
- Inside the function, the reference is used to access the actual argument used in the call.
- This means that changes made to the parameter affect the passed argument.
- To pass the value by reference, argument reference is passed to the functions just like any other value.
- Example :
  
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/1249c34f-f371-4e52-be54-671bc19c136e)
  
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/0f3d2be3-c3f4-42ad-98d3-7fc7a60c86eb)
  
  Output:
  
 ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/00af20cb-9ce3-4231-82e0-a44cba876d06)

#### 6. Pass By Name
This technique is used in programming languages such as Algol. In this technique, the symbolic “name” of a variable is passed, which allows it both to be accessed and updated.

![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/e24fa58d-268c-49d2-802d-16d63b14f5a8)



#### 5. Pass by Value-Result
This method uses in/out-mode semantics. It is a combination of Pass-by-Value and Pass-by-Result. Just before the control is transferred back to the caller, the value of the formal parameter is transmitted back to the actual parameter. This method is sometimes called call by value-result.

![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/6443e8e2-1d54-4c36-b824-942db380a9b8)


#### 6. Pass By Name
In most programming languages, passing an expression as an argument causes the expression to be evaluated, and then the result of that evaluation is passed as an argument to the function. In pass-by-name, rather than pass the result of evaluating the expression, the expression is passed literally to the function. Within the execution of the function, the use of the parameter is replaced by the expression that was provided. Pass-by-name can be thought of as a symbolic or textual substitution.

![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/208615a0-8ddd-4bba-8919-9597fb26f347)
![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/b66dd73e-ac33-44c7-a101-961ba1df2f1d)
![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/2f680205-14cb-4719-bc3e-146200eceb1f)


#### 7. Pass by Result
This method uses out-mode semantics. Just before control is transferred back to the caller, the value of the formal parameter is transmitted back to the actual parameter. This method is sometimes called call by the result. In general, the pass-by-result technique is implemented by copying.


## Static Scoping
- Static scoping is also called **lexical scoping.**
- In this scoping, a variable always refers to its top-level environment. This is a property of the program text and is unrelated to the run-time call stack.
- Static scoping also makes it much easier to make a modular code as a programmer can figure out the scope just by looking at the code.
- In contrast, dynamic scope requires the programmer to anticipate all possible dynamic contexts.
- In most programming languages including C, C++, and Java, variables are always statically (or lexically) scoped i.e., binding of a variable can be determined by program text and is independent of the run-time function call stack.
- To sum up, in static scoping the **compiler first searches in the current block, then in global variables, then in successively smaller scopes**.
  
![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/f23c4c3a-5e4f-40bd-83dc-96e3527b3663)

![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/3826d153-ab95-451b-903b-c6d41465f4ad)



## Dynamic Scoping
- With dynamic scope, a global identifier refers to the identifier associated with the most recent environment and is uncommon in modern languages.
- In technical terms, this means that each identifier has a global stack of bindings and the occurrence of an identifier is searched in the most recent binding.
- In simpler terms, in dynamic scoping, the **compiler first searches the current block and then successively all the calling functions**.
- 
![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/8253e504-99f1-4471-bd54-3064482940a1)

**Output :**

![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/35cb5286-d269-4a36-bd6e-d46cef9e6e8e)

- **Perl** supports both ***dynamic and static scoping.*** Perl’s keyword “my” defines a statically scoped local variable, while the keyword “local” defines a dynamically scoped local variable. 
 


## Arrays in C
- Arrays are collections of data elements of the same kind that are stored in contiguous memory regions.
- Arrays are derived data types in the C programming language that may hold primitive data types such as int, char, double, float, and so on.
- The simplest data structure is an array, which allows each data element to be retrieved at random by using its index number.
- An array, for example, may hold just integer or character members, but not both.
- Each array may be accessed by using the array index, which must be a positive integer number surrounded by square braces. This begins with the numerical value 0 and finishes with one less than the array index value. An array[n] with n items, for example, array[0],array[1],…..array[n-1]. Where ‘0’ is the array’s lower bound and ‘n-1’ is the array’s upper bound.
- The elements’ data types can be any valid data type, such as char, int, or float. The array declaration informs the compiler about the array’s type, name, and size.
- The elements’ data types can be any valid data type, such as char, int, or float. The array declaration informs the compiler about the array’s type, name, and size


##### **The time complexity of an array Table**
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/d3a7508f-1080-4a0e-87d4-903323994902)


#### Characteristics of the Array:
- Each element has the same data type and size, i.e. int = 4 bytes.
- The array’s elements are stored in contiguous memory regions, with the initial element put in the smallest memory location.
- Elements of the array may be accessed at random because we can determine the address of each element of the array using the specified base address and data element size.


##### Types of Array
- There are 3 types of arrays in C:
  1. One-dimensional arrays
  2. Two-dimensional arrays
  3. Multidimensional arrays


##### One-Dimensional Array
- There is just one subscript in a one-dimensional array.
- A one-dimensional (1D) array is one that is represented by a single row or column.
- One-dimensional arrays are referred to as **vectors.**
- In other words, it may be represented in a single dimension — width or height
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/a3ad03af-f4e8-49db-b1ee-e537842b8393)

##### Two Dimensional Array
- A two-dimensional array is known as a **matrix or table.**
- A matrix contains two subscripts, one for each row and one for each column. In other terms, a two-dimensional array is a two-dimensional array within a one-dimensional array.
- By multiplying the sizes of all the dimensions, the total number of items that may be held in a two array can be computed.
- 
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/056b94fa-4f0a-471e-ab8b-ca19ebd1f596)


- In C, an array with more than one dimension is referred to as a multidimensional array. A two-dimensional array is the most basic type of multidimensional array.
- ***Syntax of 2D Array in C***
  
  array_name[size1] [size2];
  
  here,
  - size1: Size of the first dimension.
  - size2: Size of the second dimension.

![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/93aad078-46e0-49ee-bb15-097cf7f30b9d)

![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/0f064353-c88c-45e7-9a42-00dc381188f6)




##### Multi-dimensional array
- We may define an n-dimensional array by using n number of brackets [], where n is the dimension number.
- By multiplying the sizes of all the dimensions, the total number of elements that may be held in a multidimensional array can be computed.
- A three-dimensional array is a collection of two-dimensional arrays. The image below depicts a 3D array with three tables, each with four rows and two columns.
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/be319bb7-6cbb-4c09-a680-348bdb995f1e)

  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/18d91cef-3748-4e82-bb3a-edfdf1168acc)

 ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/8dafbf18-ad76-471c-9380-b2189dfdae99)


## Row Major & Column Major Order
#### Row Major Order
- Row major ordering assigns successive elements, moving across the rows and then down the next row, to successive memory locations.
- In simple language, the elements of an array are stored in a Row-Wise fashion.
  
```
To find the address of the element using row-major order uses the following formula:
 Address of A[I][J] = B + W * ((I – LR) * N + (J – LC))   

 I = Row Subset of an element whose address to be found, 
 J = Column Subset of an element whose address to be found, 
 B = Base address, 
 W = Storage size of one element store in an array(in byte), 
 LR = Lower Limit of row/start row index of the matrix(If not given assume it as zero), 
 LC = Lower Limit of column/start column index of the matrix(If not given assume it as zero), 
 N = Number of column given in the matrix.
```

#### Column Major Order
- If elements of an array are stored in a column-major fashion means moving across the column and then to the next column then it’s in column-major order.
```
To find the address of the element using column-major order use the following formula:

Address of A[I][J] = B + W * ((J – LC) * M + (I – LR))  

I = Row Subset of an element whose address to be found, 
J = Column Subset of an element whose address to be found, 
B = Base address, 
W = Storage size of one element store in any array(in byte), 
LR = Lower Limit of row/start row index of matrix(If not given assume it as zero), 
LC = Lower Limit of column/start column index of matrix(If not given assume it as zero), 
M = Number of rows given in the matrix.
```
![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/58a23f99-bf34-4230-9421-c5e9f85b50ff)

![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/cd1b071c-3221-4839-86fd-277c3e0e961f)

![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/ba2dab50-b728-4751-8c50-04a03840afad)

![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/0d6abf8c-1a31-46ee-a000-1968709c3e29)



## Pointer
#### 1. What is Pointer?
- A pointer is defined as a derived data type that can store the address of other C variables or a memory location.
- We can access and manipulate the data stored in that memory location using pointers.
- As the pointers in C store the memory addresses, their size is independent of the type of data they are pointing to. This size of pointers in C only depends on the system architecture.
- A pointer references a location in memory, and obtaining the value stored at that location is known as dereferencing the pointer.
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/9e670658-fdd4-48d0-b0d8-5b7b8cc76e2d)




#### 2. Why we need Pointer?
- The ***EIP register*** is a pointer that ‘points’ to the current instruction during a program’s execution by containing its memory address. **The idea of pointers is used in C, also.**
- ***Since the physical memory cannot actually be moved, the information in it must be copied. It can be very computationally expensive to copy large chunks of memory to be used by different functions or in the different places.***
- It facililates the dynamic allocation of memory.
- It provides an alternative way to access a data type, apart from variable names, you can access the content of a variable through pointers.
- It also makes possible for us to return more than one value from a function.
- Pointers facilitate ***low-level memory access***, ***dynamic memory allocation***, and various other functionalities in C.
- Pointers enables us to access content precisely from desired memory locations, but allocating memory through pointers and not releasing it when the job is done may lead to a problem.
- Using pointers significantly **improves performance for repetitive operations**, like traversing iterable data structures (e.g. strings, lookup tables, control tables and tree structures).
- In particular, it is often much cheaper in time and space to copy and dereference pointers than it is to copy and access the data to which the pointers point
  ![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/2fbeefb8-70a0-4df7-88cb-3e35a473ede5)





#### 3. How Variables are Stored in Memory?
- C stores all variables in some sort of memory. This may be on the ***stack, the heap, or some other form of memory***.
- However, unless they are stored in a register, they will have a memory address. In fact, this is the primary reasons for types in C.
- The variable’s type, at its declaration, tells the compiler how much memory to allocate on the stack for the variable. That is why C has so many types such as char, short, int, long, etc.
- The exact size of these types depends on the compiler; however, in general, a char is one byte, a short is two bytes, an int is four bytes, and a long is eight bytes. 
- C does not have a native boolean type is because an **individual bits are not addressable, and the smallest a boolean can be is one byte.**

  



#### 4. More of Pointer...
- Pointers are used to hold the addresses of entry points for called subroutines in procedural programming and for run-time linking to dynamic link libraries (DLLs). In object-oriented programming, pointers to functions are used for binding methods, often using virtual method tables.
- Because pointers allow both protected and unprotected access to memory addresses, there are risks associated with using them, particularly in the latter case.
- Primitive pointers are often stored in a format similar to an integer; however, attempting to dereference or "look up" such a pointer whose value is not a valid memory address could cause a program to crash (or contain invalid data).
- Many modern programming languages abstract the function of pointers away from the developer’s direct control and instead handles it itself. In lower-level languages, the developer has the ability to directly interact with memory.
- Primitive pointers are often stored in a format similar to an integer; however, attempting to dereference or "look up" such a pointer whose value is not a valid memory address could cause a program to crash (or contain invalid data).





#### 5. C Pointers
The basic syntax to define a pointer is:
```
int *ptr;
```
This declares ptr as the identifier of an object of the following type:
- pointer that points to an object of type int
This is usually stated more succinctly as "ptr is a pointer to int."
```
int a = 5;
int *ptr = NULL;

ptr = &a;
```
This assigns the value of the address of a to ptr. For example, if a is stored at memory location of 0x8130 then the value of ptr will be 0x8130 after the assignment. To dereference the pointer, an asterisk is used again:

```
*ptr = 8;
```
This means take the contents of ptr (which is 0x8130), "locate" that address in memory and set its value to 8. If a is later accessed again, its new value will be 8.


#### 6. Types of Pointer
####### 1. Integer Pointer
As the name suggests, these are the pointers that point to the integer values.

Syntax
```
int *ptr;
```
These pointers are pronounced as **Pointer to Integer.**

Similarly, a pointer can point to any primitive data type. It can point also point to derived data types such as arrays and user-defined data types such as structures.

####### 2. Array Pointer
Pointers and Array are closely related to each other. Even the array name is the pointer to its first element. They are also known as **Pointer to Arrays**. We can create a pointer to an array using the given syntax.

Syntax
```
char *ptr = &array_name;
```
Pointer to Arrays exhibits some interesting properties which we discussed later in this article.

####### 3. Structure Pointer
The pointer pointing to the structure type is called Structure Pointer or Pointer to Structure. It can be declared in the same way as we declare the other primitive data types.

Syntax
```
struct struct_name *ptr;
```
In C, **structure pointers are used** in data structures such as **linked lists, trees,** etc.

####### 4. Function Ponter 
Function pointers point to the functions. They are different from the rest of the pointers in the sense that instead of pointing to the data, they point to the code. Let’s consider a function prototype – int func (int, char), the function pointer for this function will be

Syntax
```
int (*ptr)(int, char);
```
Note: ***The syntax of the function pointers changes according to the function prototype.***


####### 5. Double Pointer
In C language, we can define a pointer that stores the memory address of another pointer. Such pointers are called **double-pointers or pointers-to-pointer**. Instead of pointing to a data value, they point to another pointer.

Syntax
```
datatype ** pointer_name;
```
Dereferencing Double Pointer
```
*pointer_name; // get the address stored in the inner level pointer
**pointer_name; // get the value pointed by inner level pointer
```
Note: ***In C, we can create multi-level pointers with any number of levels such as – ***ptr3, ****ptr4, ******ptr5 and so on.***


####### 6. NULL Pointer
The Null Pointers are those pointers that do not point to any memory location. They can be created by assigning a NULL value to the pointer. A pointer of any type can be assigned the NULL value.

Syntax
```
data_type *pointer_name = NULL;
        or
pointer_name = NULL
```
It is said to be **good practice to assign NULL to the pointers currently not in use**.


####### 7. Void Pointer
The Void pointers in C are the pointers of type void. It means that they **do not have any associated data type**. They are also called **generic pointers** as they can point to any type and **can be typecasted to any type**.

Syntax
```
void * pointer_name;
```
One of the main properties of void pointers is that they **cannot be dereferenced**.


####### 8. Wild Pointers
The Wild Pointers are pointers that have **not been initialized with something yet**. These types of C-pointers **can cause problems in our programs and can eventually cause them to crash.**

Example
```
int *ptr;
char *str;
```


###### 9. Constant Pointers
In constant pointers, the **memory address stored inside the pointer is constant and cannot be modified** once it is defined. It will always point to the same memory address.

Syntax
```
data_type * const pointer_name;
```


####### 10. Pointer to Constant
The pointers **pointing to a constant value that cannot be modified are called pointers to a constant**. Here we can only access the data pointed by the pointer, but cannot modify it. Although, we can change the address stored in the pointer to constant.

Syntax
```
const data_type * pointer_name;
```


####### Other Types of Pointers in C:
There are also the following types of pointers available to use in C apart from those specified above:
- **Far pointer**: A far pointer is typically 32-bit that can access memory outside the current segment.
- **Dangling pointer**: A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer.
- **Huge pointer**: A huge pointer is 32-bit long containing segment address and offset address.
- **Complex pointer**: Pointers with multiple levels of indirection.
- **Near pointer**: Near pointer is used to store 16-bit addresses means within the current segment on a 16-bit machine.
- **Normalized pointer**: It is a 32-bit pointer, which has as much of its value in the segment register as possible.
- **File Pointer**: The pointer to a FILE data type is called a stream pointer or a file pointer.


#### 7. Size of Pointers in C
- The size of the pointers in C is equal for every pointer type.
- The size of the pointer does not depend on the type it is pointing to.
- It only depends on the operating system and CPU architecture. The size of pointers in C is
  - 8 bytes for a 64-bit System
  - 4 bytes for a 32-bit System

- The reason for the same size is that the pointers store the memory addresses, no matter what type they are. As the space required to store the addresses of the different memory locations is the same, the memory required by one pointer type will be equal to the memory required by other pointer types.
- We can find the size of pointers using the **sizeof operator**
```
// C Program to find the size of different pointers types
#include <stdio.h>

// dummy structure
struct str {
};

// dummy function
void func(int a, int b){};

int main()
{
	// dummy variables definitions
	int a = 10;
	char c = 'G';
	struct str x;

	// pointer definitions of different types
	int* ptr_int = &a;
	char* ptr_char = &c;
	struct str* ptr_str = &x;
	void (*ptr_func)(int, int) = &func;
	void* ptr_vn = NULL;

	// printing sizes
	printf("Size of Integer Pointer \t:\t%d bytes\n",
		sizeof(ptr_int));
	printf("Size of Character Pointer\t:\t%d bytes\n",
		sizeof(ptr_char));
	printf("Size of Structure Pointer\t:\t%d bytes\n",
		sizeof(ptr_str));
	printf("Size of Function Pointer\t:\t%d bytes\n",
		sizeof(ptr_func));
	printf("Size of NULL Void Pointer\t:\t%d bytes",
		sizeof(ptr_vn));

	return 0;
}
```
Output:
```
Size of Integer Pointer      :    8 bytes
Size of Character Pointer    :    8 bytes
Size of Structure Pointer    :    8 bytes
Size of Function Pointer    :    8 bytes
Size of NULL Void Pointer    :    8 bytes
```

#### 8. C Pointer Arithmetic 
The Pointer Arithmetic refers to the legal or valid arithmetic operations that can be performed on a pointer. It is slightly different from the ones that we generally use for mathematical calculations as only a limited set of operations can be performed on pointers. These operations include:
- Increment in a Pointer
- Decrement in a Pointer
- Addition of integer to a pointer
- Subtraction of integer to a pointer
- Subtracting two pointers of the same type
- Comparison of pointers of the same type.
- Assignment of pointers of the same type.

```
// C program to illustrate Pointer Arithmetic

#include <stdio.h>

int main()
{

	// Declare an array
	int v[3] = { 10, 100, 200 };

	// Declare pointer variable
	int* ptr;

	// Assign the address of v[0] to ptr
	ptr = v;

	for (int i = 0; i < 3; i++) {

		// print value at address which is stored in ptr
		printf("Value of *ptr = %d\n", *ptr);

		// print value of ptr
		printf("Value of ptr = %p\n\n", ptr);

		// Increment pointer ptr by 1
		ptr++;
	}
	return 0;
}
```
Output:
```
Value of *ptr = 10
Value of ptr = 0x7ffe8ba7ec50

Value of *ptr = 100
Value of ptr = 0x7ffe8ba7ec54

Value of *ptr = 200
Value of ptr = 0x7ffe8ba7ec58
```

#### 9. Use of Pointer in C
1. Pass Arguments by Reference
1. Accessing Array Elements
1. Return Multiple Values from Function
1. Dynamic Memory Allocation
1. Implementing Data Structures
1. In System-Level Programming where memory addresses are useful.
1. In locating the exact value at some memory location.
1. To avoid compiler confusion for the same variable name.
1.To use in Control Tables.



#### 10. Difference between Array & Pointer
![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/bf6060dc-5a12-4286-85bf-5df7fdec9d23)



#### 11. Advantage of Pointers
- Pointers are used for dynamic memory allocation and deallocation.
- An Array or a structure can be accessed efficiently with pointers
- Pointers are useful for accessing memory locations.
- Pointers are used to form complex data structures such as linked lists, graphs, trees, etc.
- Pointers reduce the length of the program and its execution time as well.



#### 12. Disadvantage of Pointers
- Memory corruption can occur if an incorrect value is provided to pointers.
- Pointers are a little bit complex to understand.
- Pointers are majorly responsible for memory leaks in C.
- Pointers are comparatively slower than variables in C.
- Uninitialized pointers might cause a segmentation fault.








## Array 


  


  




  














   
