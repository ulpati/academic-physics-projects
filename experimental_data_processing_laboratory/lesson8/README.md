
# Exercise 8.0 - Vector algebra (`exercise8.0/`)

First, let's equip the STL type `std::array` with all the algebraic functionalities we might need, by properly defining the operators `+`, `*`, `/`, `+=`. Since we cannot modify the header files and implementation files of the `std::array` class, implement these operators as free functions in a dedicated header file to be included when necessary.

# Exercise 8.1 - Solving a differential equation using Euler's method (`exercise8.1/`)

In the first exercise, implement code for the numerical solution of the differential equation describing the motion of a harmonic oscillator using Euler's method. The main objectives are:

1. Study the behavior of the position as a function of time `t` (for `t` from 0 to 70 seconds) for a fixed integration step `h` (you could plot a graph, for example) and compare the error with the exact solution.
2. Study the error behavior when using Euler's method by comparing the approximate solution with the exact solution at time t = 70 s as a function of the integration step `h` in the interval between 0.1 and 0.001.

To test the method, solve the differential equation:

$$
\frac{\mathrm{d}}{\mathrm{d}t} \begin{pmatrix}x\\v\end{pmatrix} =
\begin{pmatrix}v\\-\omega_0^2 x\end{pmatrix},\quad x(0) = 0, \quad v(0) = 1\,\text{m/s}, \quad \omega_0 = 1\,\text{s}^{-1},
$$

Plot the value of $x$ as a function of time $t$ and possibly also its error compared to the exact solution, which is $x(t) = \sin (t)$. It is recommended to perform the integration for several periods to see if the oscillation amplitude remains constant. Integrating up to $t = 70\,\text{s}$ allows you to see about 10 periods.

# Exercise 8.2 - Solving a differential equation using Runge-Kutta (`exercise8.2/`)

Repeat exercise 8.1 using the fourth-order Runge-Kutta method for solving differential equations, and compare the stability of the two methods under similar conditions (maximum $t$ and $h$).

# Exercise 8.3 - Pendulum motion (`exercise8.3/`)

In this exercise, implement the solution of the pendulum motion equation: first, try to plot the amplitude of the oscillation as a function of time. The most interesting thing to study with this code is the behavior of the oscillation period as a function of the oscillation amplitude: this way you can verify that for large angles the oscillations are no longer isochronous. The logical structure of the exercise should be as follows:

1. Set the system to an initial condition (θ₀, 0);
2. Evolve the system using Euler's or Runge-Kutta method with a suitable integration step $h$;
3. Calculate the pendulum's oscillation period;
4. Reset the system to an initial condition with varied amplitude θ₀ and repeat the sequence of operations.

It is suggested to vary θ₀ between 0.1 and 3 radians, in steps of 0.1 radians.

# Exercise 8.4 - Forced oscillations and resonance (`exercise8.4/`)

Implement the solution of the equation for a damped harmonic oscillator with a driving force. Then plot the stationary solution as a function of the oscillator's frequency, reconstructing the resonance curve. The logical structure of the exercise should be as follows:

- Build a forced damped harmonic oscillator with natural frequency ω₀=10 rad/s and damping constant α=1/30 s.
- Set a value for the driving frequency ω (it is recommended to explore an interval for ω between 9 rad/s and 11 rad/s in steps of 0.05 rad/s).
- Set the system to its initial condition $x=0$ and $v_x=0$.
- Evolve the system using the Runge-Kutta method with a suitable integration step h until the transient dies out.
- Calculate the amplitude of the oscillation.
- Change the value of the driving frequency ω, reset the system to the initial conditions $x=0$ and $v_x=0$, and repeat the sequence of operations.