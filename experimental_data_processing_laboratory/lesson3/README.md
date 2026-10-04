
# Exercise 3.0 - Evolution of the `Vector` class into a template class (`exercise3.0/`)

Transform the `Vector` class from the previous lesson into a `template` class, so that it can store objects of a generic type `T`. Note that when using template classes or functions, you do not separate header files (`.h`) and implementation files (`.cpp`); instead, you code everything inside the *header file*. This is because the compiler cannot compile a set of functions or a class separately without knowing the exact types that will be used.

# Exercise 3.1 - Data analysis code using the `std::vector` class (`exercise3.1/`)

Now let's use an “official” C++ container, the `vector` class. This container is a `template` class similar to our `Vector`. The special feature of this class is that its size may not be known in advance: you can build the vector by “appending” elements with `push_back(x)` as they become available. See [this reference](http://www.cplusplus.com/reference/vector/vector/) for more details and examples.

# Exercise 3.2 - Data analysis with vector and data visualization (`exercise3.2/`)

Now let's add to the previous exercise the ability to visualize the data read from a file.

A simple way to graphically display the distribution of a dataset is to use a histogram (`TH1F`) from ROOT. ROOT classes are very convenient to use, as they can be easily integrated into C++ code. To do this, remember to:

- Include the header file (`.h`) for each ROOT object you plan to use (`TApplication`, `TH1F`, `TGraph`, `TCanvas`).
- Modify the `makefile` so that it can automatically find the path to the required header files (`$INCS`) and the precompiled libraries to link (`$LIBS`).