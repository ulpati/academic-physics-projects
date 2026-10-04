
# Exercise 6.0 - Virtual methods (`exercise6.0/`)

Before starting the actual lesson, let's reflect on the meaning of polymorphism through the use of the `virtual` qualifier. Consider the `Particle` and its derived `Electron` classes built in lesson 5.

# Exercise 6.1 - Abstract class `BaseFunction` (`exercise6.1/`)

In this exercise, write a set of classes to model a generic function of one variable:

1. Define the abstract class `BaseFunction`, which implements a method `double Eval(double x) const` that models the effect of applying $f$ to $x$.
2. Implement a derived class `Parabola` that describes a function of the type $f(x) = a x^2 + b x + c$ (this class should have data members for the parameters $a$, $b$, and $c$, and methods to set and access them).
3. Verify the functionality of the `Parabola` class by building a small program that, given the parameters of a parabola, prints the value of $y$ at the vertex $x_v = -b / 2a$.

# Exercise 6.2 - Bisection method (`exercise6.2/`)

Now let's code the part related to algorithms for finding the zeros of a function: write a program that calculates the zeros of the function

$f(x) = 3x^2 + 5x - 2.$

To calculate the zeros, implement an abstract class `Solver` and a concrete class that implements the bisection method as discussed in the lesson. The program must print the zero's abscissa with a number of significant digits corresponding to the input precision.

# Exercise 6.3 - Analytically unsolvable equations (`exercise6.3.4/`)

In quantum mechanics problems that will be studied next year, you may encounter equations like:

$x = \tan x.$

It is easy to see that this equation has a solution in each interval $(n\pi, n\pi + \pi/2)$ with $n = 1, 2, 3\ldots$. Calculate, with a precision of at least $10^{-6}$, the values of the solutions for $n = 1\ldots 20$.

**Hint**: rewrite the equation as $\sin x - x \cos x = 0$

# Exercise 6.4 - Finding zeros of a function without using polymorphism

Try to implement an algorithm for finding the zeros of a function without using polymorphism. You could code the bisection method in a function that takes a `std::function` as input, and model the function whose zero you want to find with a lambda function.