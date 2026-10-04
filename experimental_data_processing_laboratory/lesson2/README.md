
# Exercise 2.0 - Creating the `Vector` class (`exercise2.0/`)

In this exercise, you will implement a class with two private data members: an integer (the size of the vector) and a pointer to `double` (the memory area where the data are stored).

The class should implement:

- A default constructor that sets the vector length and pointer to null values.
- A constructor that takes an integer argument: this should create a vector of length equal to the integer value, with all components set to zero (using `new` to allocate the required memory).
- A destructor: this should deallocate the memory area allocated with `new` using `delete[]`.
- Methods to set and get the values of the components: these methods should check that the requested index is compatible with the vector length.

The `Vector` class described above is not yet complete and can even be dangerous! In particular, we want to:

1. Add the possibility to construct a `Vector` from an existing `Vector` (*copy constructor*)
2. Add the possibility to assign two objects of type `Vector` (*assignment operator*)
3. Add a quick access operator for the components (`[]`).

# Exercise 2.1 - Data analysis code using the `Vector` class (`exercise2.1/`)

Rewrite the code from the first lesson using a more refined data container: the `Vector` class will allow you to fill the data container while checking, for example, that you do not exceed the allocated size. The `Vector` class also keeps its size internally (in the `m_N` field): if you need to calculate the mean of the elements of a `Vector`, **you no longer need to pass the size as an external argument**! To complete this exercise you must:

- Modify all functions in `functions.h` and `functions.cpp` so that they work with `Vector` objects instead of simple C arrays.
- Modify the `main` so that it uses the new `Vector` class and the new functions.
- Modify the `makefile`.