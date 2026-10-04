
# Exercise 10.0 - Random number generator (`exercise10.0/`)

Write a program that produces four histograms, each containing 10,000 pseudo-random numbers drawn from:

* a uniform distribution between 5 and 10.
* an exponential distribution between 0 and +∞ with constant $k=1$.
* a Gaussian distribution centered at 1 and width 1 using the Box-Muller method.
* a Gaussian distribution centered at 1 and width 1 using the accept-reject method.

# Exercise 10.2 - Calculating integrals with Monte Carlo methods (`exercise10.2/`)

1. Calculate 10,000 times the value of the integral of $\sin(x)$ on $[0, \pi]$ using the mean value method with 100 points and plot a histogram of the distribution of the obtained values.
2. Extend the previous point by calculating 10,000 times the value of the integral of $\sin(x)$ on $[0, \pi]$ using the mean value method with $N$ points, where $N$ is 100, 500, 1000, 5000, 10,000. For each value of $N$, produce a histogram of the distribution of the 10,000 obtained values.
3. Estimate the error in the calculation of the integral at 100, 500, 1000, 5000, 10,000 points as the standard deviation of the 10,000 values calculated for each $N$.
4. Repeat the same work with the hit-or-miss method.

Finally, optimize both methods and compare the results with new histograms.