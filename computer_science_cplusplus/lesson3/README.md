# Computer Science Lab - 3
### Prof. Stefano Carrazza

**Summary:** Basic exercises in C++: strings, cin, cout, file IO, if and else.

## Exercise 1 - Increment/decrement

Write a C++ program in which:

1. The program asks you to enter an integer number `n`.

2. Calculate the increment and decrement of `n` using the `++` and `--` operators.

3. Calculate the division and modulo (remainder) of `n` by an `int r = 2;`.

5. Print all results on screen.

## Exercise 2 - Even and odd numbers

Write a program that takes an integer number and determines if it is an
even or odd number. To do this, use the modulo operator together with
two-way selection operators (`if`, `else`).

## Exercise 3 - string and char

Write a C++ program in which:

1. It asks you to input from terminal your first name, last name and student ID number. Use variables of type `char first_name[20];` for the first name, `string` for the last name and `int` for the student ID number. Implement the interface as follows:
```text
First name    :
Last name     :
Student ID    :
```

2. Print with `cout` a line with the following syntax:
```bash
<last_name>, <first_name> is registered with student ID number: <student_id>.
```

## Exercise 4 - File output

Adapt the previous exercise so that the final output is written to a
file called `result.dat`.

1. Create a copy of the previous exercise.
2. Implement with `fstream` the creation of the output file with the `open()` method,
followed by a success test with the `good()` method.
3. Write the content to screen and file.
4. Close the file with the `close()` method.

## Exercise 5 - File input

Adapt the previous exercise so that the input is read from a file called
`myinput.dat` with the following content:
```
<your first name>
<your last name>
<your student ID number>
```

1. Create a copy of the previous exercise.
2. Implement with `fstream` the opening of the file `myinput.dat`.
3. Read the data from the file.
4. Close the file.
5. Print the results to screen and file `result.dat`.
