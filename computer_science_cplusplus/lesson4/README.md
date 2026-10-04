# Computer Science Lab - 4
### Prof. Stefano Carrazza

**Summary:** Basic exercises in C++: if and else and switch.

## Exercise 1 - Temperature conversions

Write a C++ program that can convert a temperature from
Celsius to Kelvin or Fahrenheit (using two-way selection `if` / `else`).

1. Ask the user to enter from terminal the input temperature in Celsius using `cin`.

2. Save the value in a variable of type `double`.

3. Ask the user:
```text
Press 1 for conversion to Kelvin.
Press 2 for conversion to Fahrenheit.
Chosen option: *implement cin*
```

4. Save the user's choice in a variable of type `int`, and create the
corresponding `if/else` condition.

5. Implement the conversion formulas for both options:
```
T(Kelvin) = T(Celsius) + 273.15
T(Fahrenheit) = T(Celsius) * 9.0 / 5.0 + 32.0
```

6. Print on screen the conversion result following the format:
```text
T(Celsius) = *input value* -> T(*chosen value*) = *value after conversion*
```

Verify the following conversions:
- 20 °C -> 68.0 °F
- 20 °C -> 293.15 K

## Exercise 2 - Quadratic equation

Write a C++ program that solves the quadratic equation
`a x^2 + b x + c = 0` for all discriminants (>, < and = 0) and where the variables `a`, `b` and `c` are assigned through `cin`.

1. Ask the user to enter 3 numbers of type `double`.

2. Calculate the discriminant `D = b^2 - 4ac` using the `std::pow` function.

3. Create an `if/else if/else` condition corresponding to the 3 possible cases
for the discriminant.

4. Calculate the solutions `x1` and `x2` using the well-known quadratic formula.
Note that for `D < 0`, the `std::sqrt()` function operates in the real field, so its argument must be positive. In this case, we suggest separating and calculating the real and imaginary components of the solutions separately.

Verify the implementation for the following coefficients:
- `a = 2`, `b = 5`, `c = 2` -> solution `x1 = -0.5` and `x2 = -2`.
- `a = 4`, `b = -4`, `c = 1` -> solution `x1,2 = 0.5`.
- `a = 1`, `b = 4`, `c = 5` -> solution `x1 = -2 + i` and `x2 = -2 - i`.

## Exercise 3 - Bicycle frame choice

Write a C++ program that based on the athlete's age, height and weight (entered from command line) proposes
a bicycle size (XS,S,M,L,XL) following the criteria:

- less than or equal to 10 years: XS
- between 10 and 18 years (inclusive):
  - height less than or equal to 1.10m: XS
  - height between 1.10m and 1.30m (inclusive) and weight less than or equal to 40kg: S
  - height between 1.10m and 1.30m (inclusive) and weight greater than 40kg: M
  - height between 1.30m and 1.60m (inclusive): M
  - height greater than 1.60m: L
- more than 18 years:
  - height less than or equal to 1.40m or weight less than or equal to 40kg: XS
  - height between 1.40m and 1.60m (inclusive): S
  - height between 1.60m and 1.70m (inclusive): M
  - height between 1.70m and 1.90m (inclusive): L
  - height greater than 1.90m: XL

Implement the conditions using selection conditions `if`, `else if`, `else`.

## Exercise 4 - switch

Use the `switch` control structure to print your name starting from the student ID number.

1. Create an `int` variable for storage of the student ID number.

2. Ask from terminal for the student ID number.

3. Create a `switch` condition in which in the case of your student ID
number it prints your name, while in the default case it prints the
error message: "Student ID not found".
