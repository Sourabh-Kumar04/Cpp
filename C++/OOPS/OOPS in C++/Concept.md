# OOP in C++

## What is OOP ?
- There are two types of programming
  1. Procedural Programming
  2. Object-Orientd Programming(OOP)
- **Procedural programming** is about writing procedures or functions that perform operations on the data.
- **Object-oriented programming** is about creating objects that contain both data and functions. OOPs is a type of programming that is based on objects rather than the functions and procedures. Individual objects are grouped into clases. OOPs implements real world entities like **Inheritance, Polymorphism, Hiding,** etc into Programming. It also binding data and code together.   
- Object-oriented programming has several advantages over procedural programming:
  1. OOP is faster and easier to execute
  2. OOP provides a clear structure for the programs
  3. OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
  4. OOP makes it possible to create full reusable applications with less code and shorter development time
- Four main features of OOPs are:
  1. Inheritance
  2. Encapsulation
  3. Polymorphism
  4. Abstraction

## Class
- Class is a user defined Data Type , which holds its own data members, functions, which can be accessed and used by creating an instance of that class.
- A Class is a prototype that consist of objects in different states and with different behaviour. It has a number of method that are common to the objects presents within that class. 
- To create a class, use the "**class**" keyword'
- Class always ends with semicolon(;)
~~~
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
~~~

### Friend Class 
- A Friend Class can access the private and protected members of other class in which it is declared as friend.
- There can be  Friend Class and Friend Function.

## Abstaction Class
- A class is abstract if  it has at least one pure virtual Function.
- We cannot declare objects of abstruct class.
- We can have pointers and reference to the abstruction class.
- Wew can access the other function excepts virtual function by objects of its derived calss.
- If we don't override the pure virtual functiom in derived class then it becomes abstuct.
- An abstucrt class can have Constructers.
- 

## Object
- An Object is a real world entity which is the basic unit of OOPs for example chair, cat, dog, etc. Different objects have different states or attributes, and behavioura\s.
- When a class is defined no memory is allocated but when it is instantiated (i.e. **Objects  is Created **) memory is allocated.
- To create an object of MyClass, specify the class name, followed by the object name.
- To access the class attributes (myNum and myString), use the dot syntax (.) on the object.
- Create an object called "myObj" and access the attributes
~~~
//Create an object called "myObj" and access the attributes:

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
~~~

- Multiple Objects of one class
~~~
// Multiple Objects of one class

// Create a Car class with some attributes
class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
~~~

#### Differnce between Class and Objects
![image](https://github.com/Sourabh-Kumar04/OOPS/assets/155216316/904655fb-fbf4-4e6b-9c96-cb0559b78e17)

#### Differnce between Class and Structures
![image](https://github.com/Sourabh-Kumar04/OOPS/assets/155216316/bdbf20c9-1615-4ca6-b204-6fafccbf578d)


## Class Method
- Methods are functions that are belongs to the class.
- There are two ways to define functions that belongs to a class:
  1. Inside class definition
  2. Outside class definition
- Inside Class Definition
  - You access methods just like you access attributes; by creating an object of the class and using the dot syntax (.):
~~~
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
~~~

- Outside Class Definition
  - To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the **scope resolution :: operator, followed by the name of the function**.
~~~
class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
~~~


## Constructer
- A constructor in C++ is a special method that is automatically called when an object of a class is created.
- A Constructer is  a member funvtion of a class which initializes objects of a class. In C++ constructor is automatically called when the objects creates.
- It has same name as class itself.
- Constructer don't have a return type.
- Types of Constructer:
  1. Default Constructer
  2. Parametrized Constructer
  3. copy Constructer
- To create a constructor, use the same name as the class, followed by parentheses ()
~~~
class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}
~~~
- a
~~~
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
~~~

- Calling Constructer outside the class
~~~
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
~~~

## Access modifiers
- Access specifiers define how the members (attributes and methods) of a class can be accessed.
- In C++, there are three access specifiers:
  - 1. **Public** - members are accessible from outside the class
    2. **Private** - members cannot be accessed (or viewed) from outside the class
    3. **Protected** - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
- By default, all members of a class are private if you don't specify an access specifier.
![image](https://github.com/Sourabh-Kumar04/OOPS/assets/155216316/65a74050-28de-4c38-8b41-60bc02b4adec)


- Public & Private
~~~
class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private)
  return 0;
}
~~~



## Encapsulation
- Encapsulation refers to binding the data and the code that works on that together ina single unit. For example, a class. Encapsulation also allows data-hiding as  the specified in one class is hidden from other classes.
- Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
- Increased security of data
- **Accesing Private Members**
~~~
// To access a private attribute, use Public "get" and "set" Methods

#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}
~~~


#### Difference between  Abstruction and Encapsulation
![image](https://github.com/Sourabh-Kumar04/OOPS/assets/155216316/572a4b97-5237-4c6a-8b95-83ced8756232)



## Inheritance
- Inheritance is a feature of OOPs which allows classes to inherit common properties from other classes, for  example, if there is a class such as 'vehicles', other classes like 'car', 'bike', etc can inherit common properties from the vehicles  class. This property helps you get rid of redundant code thereby reducing the overall size of the code.
- ***" In inheritance, a parent can hold reference of child and can access only those members of child whose signature is pro¬vided from parent to the child. "***
- In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:
  1. **Derived class (child)** - the class that inherits from another class
  2. **Base class (parent)** - the class being inherited from
- To inherit from a class, use the : symbol.

~~~

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

~~~

![image](https://github.com/Sourabh-Kumar04/OOPS/assets/155216316/b0244583-ab7f-424f-952d-7fbed70842ff)


###### Different types of Inheritance
1. Single Inheritance
2. Multiple Inheritance
3. Multilevel Inheritance
4. Hierarchial Inheritance
5. Hybrid Inheritance

###### Difference Between Multiple And Multi-level Inheitance 
![image](https://github.com/Sourabh-Kumar04/OOPS/assets/155216316/dee3c5b9-9649-4d13-84fd-f29e4bf2a919)


#### Multilevel Inheritance
- A class can also be derived from one class, which is already derived from another class.
- In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass).

~~~

// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}

~~~


#### Multiple Inheritance
A class can also be derived from more than one base class, using a **comma-separated list**.

~~~

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}

~~~

### Interface 
- Interface is a concept of OOPs that allows you to declare methods without defining them. Interfaces, unlike classes are not blueprint because they do not contain detailed instruction or actions to be performed. Any class that implements an interface defines the **Methods of the Interface**.




### Inheritance Access (Access Specifiers)
- In C++, access specifiers are keywords that define the scope and visibility of functions, variables, and other members of a class. There are three types of access specifiers:
  1. **Public**: Members declared as public are accessible from any part of the program. They can be accessed both inside and outside the class.
  2. **Private**: Members declared as private are only accessible within the class. They cannot be accessed directly from outside the class.
  3. **Protected**: Members declared as protected are accessible within the class and its derived classes (subclasses). They are not directly accessible from outside the class hierarchy.
~~~
class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}
~~~
- Where
  - class      — keyword to create a new class
  - derived_class_name   — name of the new class, which will inherit the base class
  - access-specifier  — either of private, public or protected. If neither is specified, PRIVATE is taken as default
  - base-class-name  — name of the base class
~~~
// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
   return 0;
}

~~~




## Polymorphism
- Polymorphism refers to the ability to exist in multiple forms. Multiple Definitiom can be given to a single interface. For example, if you have a class named Vehicle, it can have a method named speed but you cannot define it because different vehicles have different speeds. This method will be defined in the sub-classes with different definition for different vehicles.
- There are two types of Polymorphism
  1. **Static Polymophism** : Static Polymorphism (Staic Binding ) is a kind of polymorphism that occurs at  compile time. An example of compile-time polymorphism is ***Method Overloading***.
  2. **Dynamic Polymorphism** : Runtime Polymorphism or Dynamic Pilymorphism (Dynamic Binding) is a type of polymorphism which is resolve during runtime. An example of runtime polymorphism is ***Method Overriding***

~~~

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}

~~~

#### Difference between Inheritance and Friendship in C++
-  In C++, friendship is not inherited. If a base class has a friend function, then the function doesn’t become a friend of the derived class(es).
- For example, the following program prints an error because the show() which is a friend of base class A tries to access private data of derived class B.
~~~
// CPP Program to demonstrate the relation between 
// Inheritance and Friendship 
#include <iostream> 
using namespace std; 

// Parent Class 
class A { 
protected: 
	int x; 

public: 
	A() { x = 0; } 
	friend void show(); 
}; 

// Child Class 
class B : public A { 
private: 
	int y; 

public: 
	B() { y = 0; } 
}; 

void show() 
{ 
	B b; 
	cout << "The default value of A::x = " << b.x; 

	// Can't access private member declared in class 'B' 
	cout << "The default value of B::y = " << b.y; 
} 

int main() 
{ 
	show(); 
	getchar(); 
	return 0; 
}

~~~

Output:
~~~
prog.cpp: In function ‘void show()’:
prog.cpp:19:9: error: ‘int B::y’ is private
    int y;
        ^
prog.cpp:31:49: error: within this context
    cout << "The default value of B::y = " << b.y;
~~~


#### Difference between Inheritance and polymorphism
![image](https://github.com/Sourabh-Kumar04/OOPS/assets/155216316/cb64542a-4564-4ec9-885f-e3b66904fe55)

![image](https://github.com/Sourabh-Kumar04/OOPS/assets/155216316/b16f75bf-f282-42aa-abcd-f5e9873e7731)


## Function Overloading 
- If multiple functions having same name but parameters of the functions should be different is known as Function Overloading.
- Overloading doesn’t work for derived class in the C++ programming language.
- 1. Parameters should have a different type
~~~
add(int a, int b)
add(double a, double b)
~~~

~~~
#include <iostream>
using namespace std;
 
void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 
void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}
 
// Driver code
int main()
{
    add(10, 2);
    add(5.3, 6.2);
 
    return 0;
}
~~~
Output:
~~~
sum = 12
sum = 11.5
~~~

- 2. Parameters should have a different number
~~~
add(int a, int b)
add(int a, int b, int c)
~~~

~~~
#include <iostream>
using namespace std;
 
void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 
void add(int a, int b, int c)
{
    cout << endl << "sum = " << (a + b + c);
}
 
// Driver code
int main()
{
    add(10, 2);
    add(5, 6, 4);
 
    return 0;
}
~~~

Output:
~~~
sum = 12
sum = 15
~~~

- 3. 
Parameters should have a different sequence of parameters
~~~
add(int a, double b)
add(double a, int b)
~~~

~~~
#include<iostream>
using namespace std;
 
void add(int a, double b)
{ 
    cout<<"sum = "<<(a+b);
}  
 
void  add(double a, int b)
{
    cout<<endl<<"sum = "<<(a+b);
}  
 
// Driver code
int main()
{
    add(10,2.5);
    add(5.5,6);
 
      return 0;
}
~~~

Output:
~~~
sum = 12.5
sum = 11.5
~~~

### Difference between Function Overloading and Function Overriding
![image](https://github.com/Sourabh-Kumar04/OOPS/assets/155216316/0372c3e1-56b9-4ecb-b983-60b3c7893c95)



##### Why is Function overloading not possible with different return types? 
- Function overloading is possible in C++ and Java but only if the functions must differ from each other by the types and the number of arguments in the argument list. However, functions can not be overloaded if they differ only in the return type.
- Function overloading comes under the compile-time polymorphism. During compilation, the function signature is checked. So, functions can be overloaded, if the signatures are not the same. The return type of a function has no effect on function overloading, therefore the same function signature with different return type will not be overloaded.

- Example: if there are two functions: int sum() and float sum(), these two will generate a compile-time error as function overloading is not possible here.
~~~
// CPP Program to demonstrate that function overloading 
// fails if only return types are different 
#include <iostream> 
int fun() { return 10; } 
  
char fun() { return 'a'; } 
// compiler error as it is a new declaration of fun() 
  
// Driver Code 
int main() 
{ 
    char x = fun(); 
    getchar(); 
    return 0; 
}
~~~

#### Functions that can not be overloaded in C++
1. Function declarations that differ only in the return type.
~~~
   #include<iostream>
int foo() { 
  return 10; 
}
 
char foo() { 
  return 'a'; 
}
 
int main()
{
   char x = foo();
   getchar();
   return 0;
}
~~~

3. Member function declarations with the same name and the name parameter-type-list cannot be overloaded if any of them is a static member function declaration.
~~~
#include<iostream>
class Test {
   static void fun(int i) {}
   void fun(int i) {}   
};
 
int main()
{
   Test t;
   getchar();
   return 0;
}  
~~~
5. Parameter declarations that differ only in a pointer * versus an array [] are equivalent. That is, the array declaration is adjusted to become a pointer declaration. Only the second and subsequent array dimensions are significant in parameter types.
~~~
int fun(int *ptr);
int fun(int ptr[]); // redeclaration of fun(int *ptr)
~~~
7. Parameter declarations that differ only in that one is a function type and the other is a pointer to the same function type are equivalent.
~~~
void h(int ());
void h(int (*)()); // redeclaration of h(int())   
~~~
9. Parameter declarations that differ only in the presence or absence of const and/or volatile are equivalent. That is, the const and volatile type-specifiers for each parameter type are ignored when determining which function is being declared, defined, or called.
~~~
#include<iostream>
#include<stdio.h>
  
using namespace std;
  
int f ( int x) {
    return x+10;
}
 
int f ( const int x) {
    return x+10;
}
 
int main() {     
  getchar();
  return 0;
}  
~~~



## Method Overloading 
- Multiple methods having the same name but different number of arguments or type of arguments is called method overloading. Or  Method overloading is a feature of OOPs which makes it possible to give the same name to more than one method within a class if the  argument passed differently.

## Operator Overloading
- When an operator is re-used for multiple task then it is called operator overloading
- C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading.
- Operator overloading is a compile-time polymorphism. For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +. Other example classes where arithmetic operators may be overloaded are Complex Numbers, Fractional Numbers, Big integers, etc.
- ***Implementation***
~~~
// C++ Program to Demonstrate the 
// working/Logic behind Operator
// Overloading
class A {
    statements;
};
 
int main()
{
    A a1, a2, a3;
 
    a3 = a1 + a2;
 
    return 0;
}
~~~


- Examples of Operator OverLooading
~~~
// C++ Program to Demonstrate
// Operator Overloading
#include <iostream>
using namespace std;
 
class Complex {
private:
    int real, imag;
 
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
 
    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
} 
~~~
// for Futher details refers to: https://www.geeksforgeeks.org/operator-overloading-cpp/

##### Difference Between Operator Functions and Normal Functions
Operator functions are the same as normal functions. The only differences are, that the name of an operator function is always the operator keyword followed by the symbol of the operator, and operator functions are called when the corresponding operator is used. 

~~~
#include <iostream>
using namespace std;
class Complex {
private:
    int real, imag;
 
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    void print() { cout << real << " + i" << imag << endl; }
    // The global operator function is made friend of this
    // class so that it can access private members
    friend Complex operator+(Complex const& c1,
                             Complex const& c2);
};
Complex operator+(Complex const& c1, Complex const& c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3
	= c1
          + c2; // An example call to "operator+"
    c3.print();
    return 0;
}
~~~

Output:
~~~
12 + i9
~~~

###### Operators that can not be Overloaded in C++
1. sizeof
2. typeid
3. Scope resolution
4. Class member access operators (.(dot), .*(pointer to member opertaor))
5. Ternary or Conditional (?:)

###### Operators that can be overloaded in C++
1. Uniary Operators
2. Binary Operators
3. Special Operators ( [], (), etc)
![image](https://github.com/Sourabh-Kumar04/OOPS/assets/155216316/388cdee3-0e08-4fc3-87ff-9906d9d0bf1d)

## Type of Operator Over-loading 
1. Overloading Unary Operator
- In the unary operator function, no arguments should be passed. It works only with one class object. It is the overloading of an operator operating on a single operand.
- Example: Assume that class Distance takes two member objects i.e. feet and inches, and creates a function by which the Distance object should decrement the value of feet and inches by 1 (having a single operand of Distance Type).
~~~
// C++ program to show unary  
// operator overloading 
#include <iostream> 
using namespace std; 
  
class Distance { 
public: 
    int feet, inch; 
  
    // Constructor to initialize  
    // the object's value 
    Distance(int f, int i) 
    { 
        this->feet = f; 
        this->inch = i; 
    } 
  
    // Overloading(-) operator to  
    // perform decrement operation  
    // of Distance object 
    void operator-() 
    { 
        feet--; 
        inch--; 
        cout << "\nFeet & Inches(Decrement): " <<  
                  feet << "'" << inch; 
    } 
};

// Driver Code 
int main() 
{ 
    Distance d1(8, 9); 
  
    // Use (-) unary operator by  
    // single operand 
    -d1; 
    return 0; 
}
~~~

Output: 
~~~
Feet & Inches(Decrement): 7'8
~~~

2. Over-loading Binary Operator
- In the binary operator overloading function, there should be one argument to be passed. It is the overloading of an operator operating on two operands.
- Below is the C++ program to show the overloading of the binary operator (+) using a class Distance with two distant objects.

~~~
// C++ program to show binary  
// operator overloading 
#include <iostream> 
using namespace std; 
  
class Distance { 
public: 
    int feet, inch; 
    
    Distance() 
    { 
        this->feet = 0; 
        this->inch = 0; 
    } 
  
    Distance(int f, int i) 
    { 
        this->feet = f; 
        this->inch = i; 
    } 
  
    // Overloading (+) operator to  
    // perform addition of two distance  
    // object 
    // Call by reference
    Distance operator+(Distance& d2)  
    { 
        // Create an object to return 
        Distance d3; 
  
          
        d3.feet = this->feet + d2.feet; 
        d3.inch = this->inch + d2.inch; 
  
        // Return the resulting object 
        return d3; 
    } 
}; 
  
// Driver Code 
int main() 
{ 
    Distance d1(8, 9); 
    Distance d2(10, 2); 
    Distance d3; 
  
    // Use overloaded operator 
    d3 = d1 + d2; 
  
    cout << "\nTotal Feet & Inches: " <<  
             d3.feet << "'" << d3.inch; 
    return 0; 
}	
~~~

Output:
~~~
Total Feet & Inches: 18'11
~~~

3. Overloading Binary Operator using a Friend function
- n this approach, the operator overloading function must be preceded by the friend keyword, and declare the function in the class scope. Keeping in mind, the friend operator function takes two parameters in a binary operator and varies one parameter in a unary operator. All the working and implementation would same as the binary operator function except this function will be implemented outside the class scope.
- Example: Below is the C++ program to show binary operator overloading using a friend function.

~~~
// C++ program to show binary  
// operator overloading using  
// a Friend Function 
#include <iostream> 
using namespace std; 
  
class Distance { 
public: 
    
    int feet, inch; 
  
    Distance() 
    { 
        this->feet = 0; 
        this->inch = 0; 
    } 
  
    Distance(int f, int i) 
    { 
        this->feet = f; 
        this->inch = i; 
    } 
  
    // Declaring friend function  
    // using friend keyword 
    friend Distance operator + (Distance&,  
                                Distance&); 
};
  
// Implementing friend function  
// with two parameters 
// Call by reference 
Distance operator+(Distance& d1, 
                   Distance& d2)  
{ 
    // Create an object to return 
    Distance d3; 
  
    d3.feet = d1.feet + d2.feet; 
    d3.inch = d1.inch + d2.inch; 
  
    // Return the resulting object 
    return d3; 
}

// Driver Code 
int main() 
{ 
    Distance d1(8, 9); 
    Distance d2(10, 2); 
    Distance d3; 
  
    // Use overloaded operator 
    d3 = d1 + d2; 
  
    cout << "\nTotal Feet & Inches: " <<  
             d3.feet << "'" << d3.inch; 
    return 0; 
}
  
~~~

Output:
~~~
Total Feet & Inches: 18'11
~~~







## Function Overriding 
















## Method Overriding
- A virtual or pure virtual method of parent class re-written in child class with same signature and different body contents is called as method overriding OR
- Method overriding is a feature of OOPs by which the child class or the subclass can redefine methods presents in the base class or parent class. Here, the method that is overriden has the same name as well as the signature meaning the arguments passed and the return type.
- 

### Difference between Function Over-loading & Function Over-riding
![image](https://github.com/Sourabh-Kumar04/OOPS/assets/155216316/dfac4002-af4e-4f03-a838-2c6988590715)



## Virtual Function
- A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class.
- When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method.
- Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for the function call.
- They are mainly used to achieve Runtime polymorphism.
- Functions are declared with a virtual keyword in a base class.
- The resolving of a function call is done at runtime.


#### Rules for Virtual Function
1. Virtual functions cannot be static.
1. A virtual function can be a friend function of another class.
1. Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
1. The prototype of virtual functions should be the same in the base as well as the derived class.
1. They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
1. A class may have a virtual destructor but it cannot have a virtual constructor.

~~~
// C++ program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
	virtual void print() { cout << "print base class\n"; }

	void show() { cout << "show base class\n"; }
};

class derived : public base {
public:
	void print() { cout << "print derived class\n"; }

	void show() { cout << "show derived class\n"; }
};

int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();

	return 0;
}

~~~

Output:

~~~
print derived class
show base class
~~~

~~~
// C++ program to illustrate
// working of Virtual Functions
#include <iostream>
using namespace std;

class base {
public:
	void fun_1() { cout << "base-1\n"; }
	virtual void fun_2() { cout << "base-2\n"; }
	virtual void fun_3() { cout << "base-3\n"; }
	virtual void fun_4() { cout << "base-4\n"; }
};

class derived : public base {
public:
	void fun_1() { cout << "derived-1\n"; }
	void fun_2() { cout << "derived-2\n"; }
	void fun_4(int x) { cout << "derived-4\n"; }
};

int main()
{
	base* p;
	derived obj1;
	p = &obj1;

	// Early binding because fun1() is non-virtual
	// in base
	p->fun_1();

	// Late binding (RTP)
	p->fun_2();

	// Late binding (RTP)
	p->fun_3();

	// Late binding (RTP)
	p->fun_4();

	// Early binding but this function call is
	// illegal (produces error) because pointer
	// is of base type and function is of
	// derived class
	// p->fun_4(5);

	return 0;
}

~~~

Output:
~~~
base-1
derived-2
base-3
base-4
~~~


### Limitations of Virtual Functions
1. **Slower:** The function call takes slightly longer due to the virtual mechanism and makes it more difficult for the compiler to optimize because it does not know exactly which function is going to be called at compile time.
2. **Difficult to Debug:** In a complex system, virtual functions can make it a little more difficult to figure out where a function is being called from.

***For more about Virtual function refer to: https://www.geeksforgeeks.org/virtual-function-cpp/?ref=lbp***








## Constructor in Multiple Inheritance in C++
https://www.geeksforgeeks.org/constructor-in-multiple-inheritance-in-cpp/?ref=next_article









