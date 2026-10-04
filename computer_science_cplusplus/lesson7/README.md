# Computer Science Lab - 7
### Prof. Stefano Carrazza

**Summary:** Basic exercises in C++: pointers and functions.

## Exercise 1 - Hello World pointers

Write a C++ program that uses pointers.

1. Create a variable `x` and a pointer `*p` of type `double` initialized
respectively with `5.5` and `NULL`.

2. Print to terminal:
   - the value in memory of the variable `x`.
   - the memory address of the variable `x`.
   - the address pointed to by the pointer `p`.
   - the memory address of the pointer `p`.

3. Assign to the pointer `p` the address of the variable `x`, and print to
terminal the address pointed to by `p` and the respective saved value.

4. Ask from terminal for a number of type `double` and assign it to the value pointed to by `p`. Check that the value of `x` has been modified.

5. Create a dynamic array of type `double` of size 10, print the memory address
for all components of the array. Check that the addresses differ
by the number of bytes of the type `double`. (Remember to delete the array
before the end of main)

## Exercise 2 - Hello world functions

Write a C++ program that uses functions.

1. Create a stack array `int v[10] = {9,2,1,3,4,7,0,11,20,5};`.

2. Write a function `print_array` of type `void` that takes as argument an integer array and its respective size and prints its content to the screen. Test in `main` the call to `print_array` with `v`.

3. Write a function `max_array` of type `int` that returns the maximum value present in an array. Test the implementation with `v`, printing from main its maximum value.

4. Write a function `min_array` of type `int` that returns the minimum value present in an array. Test the implementation with `v`, printing from main its minimum value.

5. Write a function `min_max_array` of type `void` that returns the maximum
and minimum value of an `int` array through two arguments `min` and `max` passed to the function by reference.

6. Write a function `sort_array` of type `void` that sorts (selection sort) an integer array in ascending order. Test the function with the array `v` and print its content.

## Exercise 3 - Numerical integration of a function

Write a C++ program that calculates the numerical integral of an analytic function using the trapezoidal rule:
```
 /b
 |  f(x) dx =  d * Sum_{i=0,n-1} ( f(a + i * d) + f(a + (i + 1) * d) ) / 2
 /a
```
where `d = (b-a)/n`.

1. Implement a function `gauss` of type `double` that returns the value of a normalized Gaussian function centered at `mu=0` and with `sigma=1`:
```
gauss(x) = 1/(sqrt(2*pi)) * exp(-x*x/2)
```

2. Implement a function `integrate_gaussian` of type `double` that takes as arguments `a`, `b` and `n` (number of steps), and calculates the numerical integral of `gauss` between `a` and `b`.

3. Test the previous function for `(a,b) = (-10, 10)` and `(a,b) = (-1,1)`, for each configuration vary `n=[10,100]`.

## Exercise 4 - Point discriminator

Write a C++ program able to discriminate whether a point with Cartesian coordinates `(x,y)` is inside
a circle with center at `c=(1, 1)` and radius `r=1`.

0. Create variables of type `const double` and save the properties of the above circle.

1. Build a function `distance` of type `double` that calculates the distance between 2
coordinates, `x` and `y` of type double and the center of the circle. To do this, pass
as argument the coordinates to test and the center of the circle. Suggestion: use
the Pythagorean theorem where the legs are the differences between the entered coordinates and those of the center of the circle.

2. Implement a function `check_circle` of type `void` that takes as arguments the 4 previous coordinates and the radius of the circle `(x, y, x_c, y_c, r)` and a variable `status` of type `bool` by reference. Calculate inside this function: the call to the `distance` function followed by the check if the point is inside the circle. Save in `status` the value `true` if the point is inside the circle, `false` otherwise.

2. Implement an infinite loop in which pairs of coordinates `(x,y)` are
entered from terminal. For each pair of coordinates, apply the discriminator.

3. Test for the following pairs of points:
```
(x,y) = (1.1, 0.7)  ->  true
(x,y) = (2.1, 0.7)  ->  false
(x,y) = (0.5, 0.3)  ->  true
(x,y) = (1.0, 1.0)  ->  true
(x,y) = (0.1, 0.1)  ->  false
```

## Exercise 5 - Dot product, norm, transpose matrix

Write a C++ program that performs linear algebra operations.

1. Create two 1D arrays of type `double` with `v = {1,2,3,4,5}, w = {10,2,4,3,2}`. Create a 2D array of type `double` with `double M[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}`.

2. Implement a function `scalar` of type `double` that returns the dot product between 2 arrays. Test the function with `v` and `w` and print the result to terminal.

3. Implement a function `norm` of type `double` that calculates the norm of an array using the `scalar` function. Test the implementation with `v` and print the result to terminal.

4. Implement a function `swap` of type `void` that swaps the value between 2 objects by reference. Apply this function to `M` (i.e. calculation of the transpose matrix) and print the result to terminal.
