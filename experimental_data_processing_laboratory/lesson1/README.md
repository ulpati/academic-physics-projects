

# Exercise 1.0 - First analysis code (`exercise1.0/`)

Write a single program that reads data from a file (`data.dat`), stores them in a dynamic array, calculates the mean, variance, and median of the collected data. Write the sorted data in ascending order to an output file. The number of elements to load and the name of the file containing the data are provided via keyboard input when the program is executed.

# Exercise 1.1 - Analysis code with functions (`exercise1.1/`)

Reorganize the previous code to make it more modular and reusable. For example: calculating the mean is a general operation that can be implemented as a function that takes an array of data and its size as input and returns a value (the mean). If in the same main code you need to calculate the mean of different data arrays multiple times, you should not repeat the code fragment each time; the same applies to reading a dataset from a file or calculating the median. The code should therefore have a structure like:

- Declaration of all functions to be used.
- Main program `int main() {...}` where the functions are called.
- At the end of the main program, the implementation of all declared functions.

# Exercise 1.2 - Analysis code with functions and Makefile (`exercise1.2/`)

Complete the reorganization process of exercise 1.0 as follows:

- Move all variable declarations at the top of the program into a separate file `functions.h`.
- Move all function implementations at the end of the program into a separate file `functions.cpp`.
- Remember to include the file `functions.h` in both `main.cpp` and `functions.cpp` using `#include "functions.h"`
- Compile `main.cpp` and `functions.cpp` separately using a `Makefile`.

# Exercise 1.3 - Function overloading (`exercise1.3/`)

Add to your function library a function `void Print(const double *, int)` that allows you to print the elements of an array to the screen. This is possible thanks to *overloading* (functions with the same name but different arguments).