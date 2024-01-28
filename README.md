# C & C++ concept

###  Why are arrays indexed from zero?
- Array is typically a contiguous area within the computer memory. In most languages, the variable that we use to refer to this array is inherently a pointer. A pointer that stores the starting address of the contiguous portion of memory.
- Let's take an example, say there's an integer array arr of 5 numbers in a language where every integer occupies 2 bytes of memory. Say, this array's contiguous area starts at byte address 44 and continues until 54 (requiring 10 bytes, i.e. 5 integers of 2 bytes each).
- Within this, when referring to arr[i] we are essentially looking up the memory location in a shorthand way.
  
![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/92c5edcf-26e8-4862-adaa-767944c75eb8)

- What difference would it have made had it started at 1 instead of 0?
![image](https://github.com/SourabhKumar2633/-C-C-concept/assets/146738264/b3cbd317-f05b-4d34-8af6-bcb3cd341f02)
- We would need to subtract 1 from every index we are accessing if we start indexing at 1. Looking keenly, we are offsetting from starting index to get every element. Using 0 as the index then means using an exact offset from starting point as the index whereas when using 1, we would have to compute the offset itself.

#####  Why use 0 then?
  1.  Using 0 allows us one less computation for accessing elements.
  2.  It doen not matters much today.
  3.  But probably it mattered in the early days of computing to have algorithms in the most efficient way.
  4.  Maybe, it was an efficiency hack for ancient computers.
  5.  The simple choice of 0-based indexing simplifies a lot of mathematics on arrays for programmers and allows for some elegant implementations of some concepts like hash tables, consistent hashing, and binary heaps.
  6.  Nevertheless, more than a decision of computational efficiency or mathematical accuracy, **it is a matter of linguistic choice.** 

   
