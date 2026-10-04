
# Exercise 7.0 - Integration with the *midpoint* method at fixed number of steps (`exercise7.0/`)

Implement code to compute the integral of $\sin(x)$ on $[0, \pi]$ using the midpoint method.

1. First, build a test program that calculates the integral using a fixed number of intervals.
2. To check the accuracy obtained with a fixed number of steps, print a table showing the difference between the numerical result and the exact value (obtained analytically) as a function of the number of steps (or the step length $h$). In addition to the table, you can plot the error as a function of the step length $h$ using [gplot++](https://github.com/ziotom78/gplotpp) or a `TGraph` from ROOT.

# Exercise 7.1 - Simpson integration (`exercise7.1/`)

Implement integration using Simpson's method with a fixed number of steps. You can use the same scheme as the previous exercise by building a derived class `Simpson`. As in Exercise 7.0, print a table (or plot) showing the achieved accuracy as a function of the number of steps.

# Exercise 7.2 - Integration with the trapezoidal rule at fixed precision (`exercise7.2/`)

Finish the session by implementing the integration of $\sin x$ on $[0, \pi]$ using the trapezoidal method. In this last exercise, reflect on the use of a numerical integration algorithm with fixed precision instead of a fixed number of steps. In the previous exercises, the calculation with a fixed number of steps does not give any indication of the result's quality: is integrating with 10 steps enough? The idea is that the user provides a desired precision, and the algorithm automatically increases the number of steps until the required precision for the integral value is reached. The algorithm, given the precision value, should double the number of steps until the error (estimated at runtime) becomes less than the set precision. Finally, compare the three methods developed during this session using a plot.