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


#### 5. Pass by Result
This method uses out-mode semantics. Just before control is transferred back to the caller, the value of the formal parameter is transmitted back to the actual parameter. This method is sometimes called call by the result. In general, the pass-by-result technique is implemented by copying.

#### 6. Pass by Value-Result
This method uses in/out-mode semantics. It is a combination of Pass-by-Value and Pass-by-Result. Just before the control is transferred back to the caller, the value of the formal parameter is transmitted back to the actual parameter. This method is sometimes called call by value-result.

























   
