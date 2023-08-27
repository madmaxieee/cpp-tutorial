# C++ basics

Welcome to the C++ basics lesson!

---

# First C++ Program

```cpp
/*
 This is my first C++ program!
 It shows a message on the console.
 */
#include <cstdio> // header for the printf() function

// the main() function
int main() {
    printf("Hello, World!\n"); // print message
    return 0; // return 0 to indicate success
}
```

---

# Comments

- Single line comments start with `//`
- Multi-line comments start with `/*` and end with `*/`
- Explain why you are doing something in this specific way, not what you are doing

  - Example: `// increment x by 1` is bad, `// increment x to avoid division by zero` is good

- Comments should be short and concise

---

# C++ Program Style

- C++ is case sensitive
- Whitespace is ignored (except in strings)
- Indentation is not required, but it makes the code more readable

```cpp
int main() {
    printf("Hello, World!\n");
    return 0;
}
```

vs.

```cpp
int
main(
){printf("This is my first C++ program!"); return 0;}
```

---

# The main() Function

- C++ allows you to "program" the computer to do what you want – by writing "functions"
- A function can

  - accept parameters
  - perform some tasks
  - then return the results

- Every C++ program starts with the function called main
- The main function needs to return an integer value to the caller (OS shell) when it finishes the execution

---

# Keywords `return` and `int`

- `return` statement
  - Most common way to exit a functions
  - When used at the end of the main function
  - The value 0 indicates to the caller (OS) that the program has terminated successfully
- Data type `int`
  - Represents an integer number, e.g. -1, 0, 1, 2, 3, ...
  - In this case, it indicates that the value returned by the function `main()` is an integer

---

# C++ Keywords

- A word reserved by C++ for a specific use
- Cannot be used as variable and function names

[reference](https://en.cppreference.com/w/cpp/keyword)

---

# A C++ Program with Two Functions

```cpp
#include <cstdio>

double kinetic_energy(int, double); // <-- function declaration

int main() {
  double energy;
  energy = kinetic_energy(15, 300); // <-- function call
  printf("The value of the kinetic energy is: %.3f", energy);
  return 0;
}

double kinetic_energy(int m, double v) { // <-- function definition
  double ke;
  ke = 0.5 * m * v * v;
  return ke;
}
```

---

# First C++ Program ("C++"-Style Output)

```cpp
/*
 This is my first C++ program!
 It shows a message on the console.
 */
#include <iostream> // header for the cout object

using namespace std; // use the namespace std

int main() {
    cout << "Hello, World!";
    return 0;
}
```

---

# Using Functions

- Most programs use (call) functions provided by the standard library or third-party library
- The compiler requires function prototypes (declarations) be provided for syntax checking
- Prototypes of functions are usually stored in header files
- The header file is used by the compiler at compile time (preprocessing)
- The library (binary code) is used by the linker at link time for extracting the actual implementation of the function

---

# Library

- A library consists of object codes of pre-compiled functions
- The list of functions and their prototypes are stored in header files

```
~~~graph-easy --as=boxart
digraph {
  rankdir=LR

  "iostream.h" -> "compiler" [label="#include"];
  "main.cpp" -> "compiler";

  "compiler" -> "main.o" [label="compile"];
  "main.o" -> "linker";

  "library" -> "linker";
  "linker" -> "program" [label="link"];
}
~~~
```

---

# Standard Library

- Standard library is provided as part of the language specification
- built-in functions
  - math
  - string
  - input/output
  - etc.

---

# Preprocessor Directives

- lines that start with `#`
- `#include <iostream>`

  - tells the compiler to include the contents of the file `iostream` in the program
  - search in system directories

- `#include "myheader.h"`
  - search in current directory

---

# C++ Statement vs. Directive

- C++ statement

  - `int x = 5;`
  - always ends with a semicolon
  - instructs the program to do something

- Preprocessor directive

  - `#include <iostream>`
  - does not end with a semicolon
  - instructs the preprocessor to do something

---

# `printf()` vs. `cout`

- `printf()`

  - `printf()` is a function
  - uses escape sequences to format the output
  - requires correct format specifiers
  - e.g. `printf("The value of x is: %d", x);`

- `cout`

  - `cout` is an object
  - uses the `<<` operator to format the output
  - safe and easy to use
  - e.g. `cout << "The value of x is: " << x;`

---

# Namespaces

- divides the global scope into sub-scopes to prevent name collisions
- `std::cout`
  - `std` is the namespace of the standard library
  - specifies that the function `cout` is defined in the namespace `std`

---

# First C++ Program Revisited

```cpp
/*
 This is my first C++ program!
 It shows a message on the console.
 */
#include <iostream> // header for the cout object

using namespace std; // <-- use the namespace std

int main() {
    cout << "Hello, World!"; // <-- no need to specify std::cout here
    return 0;
}
```
