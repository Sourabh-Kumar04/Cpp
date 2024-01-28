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
















 
  




  


  




  














   
