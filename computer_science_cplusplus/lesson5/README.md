# Computer Science Lab - 5
### Prof. Stefano Carrazza

**Summary:** Basic exercises in C++: for, while, do/while loops.

## Exercise 1 - Hello World for, while and do/while

Write a C++ program that uses the three loop techniques in C++ to print a message to the terminal.

1. Create a `for` loop that prints the message for 5 times:
    ```
    Hello World for index = *i*
    ```
    where `*i*` is the integer representing the loop index.

2. Similarly, implement a `while` loop that prints the message:
    ```
    Hello World while index = *i*
    ```

3. Finally, implement the `do/while` loop with the message:
    ```
    Hello World do/while index = *i*
    ```

## Exercise 2 - Calculate average (input from terminal)

Write a C++ program able to calculate the average of numbers entered
from the terminal using a `for` loop.

1. Ask the user how many numbers they want to enter. Save this value in
an `int n` variable.

2. Build a `for` loop that asks the user to enter `n` numbers of type `double`.

3. Create a variable `double sum = 0;` and increment it inside the loop using the new values entered by the user.

4. Create a variable to store the average.

5. Print the result to the screen.

## Exercise 3 - Counter of even and odd numbers

Write a C++ program that calculates the total number of even and odd numbers
entered by the user using a `for` or `while` loop.

1. Create a `for` or `while` loop that asks the user to enter integer numbers, where the termination condition is given by CTRL+D (`cin.eof()`).

2. For each number entered by the user, determine if it is even or odd using the if/else condition. Use two `int` counters to save the total number of even and odd numbers entered by the user.

3. Print the final results to the screen.

## Exercise 4 - Calculate average (input from file)

The data contains 1000 numbers corresponding to laboratory measurements of the gravitational acceleration constant `g`.

1. Read all numbers from file using an infinite `for` loop, controlled by the `eof` condition.

2. Save in a variable `double sum = 0.0;` the incremental sum of the numbers.

3. Do the same for counting the total number of elements.

4. Calculate the average and print it to the screen, verify that its value is close to `g=9.7803184`.

## Exercise 5 - Calculate the Fibonacci sequence

Write a C++ program that calculates the first `n` elements of the Fibonacci sequence.

An example of 13 elements of the Fibonacci sequence is:
```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
```
where the first 2 elements are always 0 and 1, and the following ones are the sum of the previous 2 elements.

1. Ask the user how many elements of the Fibonacci sequence they want to calculate. Save this information in an `int n` variable.

2. Implement a `for` loop in which all elements are calculated and printed.
