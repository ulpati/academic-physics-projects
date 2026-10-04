# 🔬 Experimental Data Processing Laboratory

Advanced C++ programming course focused on numerical methods and data analysis for physics applications.

[![License](https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg)](../LICENSE)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)]()
[![Course](https://img.shields.io/badge/Course-UNIMI%20Physics-green.svg)]()
[![Framework](https://img.shields.io/badge/Framework-ROOT-orange.svg)]()

## 📋 Table of Contents

- [Overview](#-overview)
- [Course Objectives](#-course-objectives)
- [Lessons Overview](#-lessons-overview)
- [Installation](#-installation)
- [Usage](#-usage)
- [Project Structure](#-project-structure)
- [Requirements](#️-requirements)
- [Acknowledgements](#-acknowledgements)

## 🎯 Overview

This repository contains all the code developed during the Experimental Data Processing Laboratory course at University of Milan (UNIMI) Physics degree program. The course provides an in-depth introduction to numerical techniques used in physics, focusing on C++ programming with emphasis on object-oriented design patterns.

The exercises progress from basic data analysis to advanced topics including numerical integration, differential equation solving, and Monte Carlo simulations. Many exercises utilize the ROOT framework for scientific data visualization.

## 📚 Course Objectives

The course aims to provide students with:

- Introduction to main numerical techniques used in physics
- Understanding of operating system functions and commands
- Knowledge of data structures, particularly C++ Standard Library containers
- Numerical techniques for calculating integrals and solving differential equations
- Methods based on random number generation (Monte Carlo)
- Thorough understanding of advantages and limitations of numerical techniques
- Advanced C++ features: inheritance, encapsulation, and polymorphism
- Object-oriented design and programming methodology

## 📖 Lessons Overview

### Lesson 1: Data Analysis with Arrays
Introduction to data analysis using basic C++ arrays.
- Exercise 1.0 - First analysis code (mean, variance, median)
- Exercise 1.1 - Analysis code with functions
- Exercise 1.2 - Analysis with functions and Makefile
- Exercise 1.3 - Function overloading

### Lesson 2: Vector Class Implementation
Custom Vector class for data management.
- Exercise 2.0 - Creating the Vector class
- Exercise 2.1 - Data analysis using the Vector class

### Lesson 3: Templates and STL
Template programming and Standard Template Library.
- Exercise 3.0 - Vector class evolution to template class
- Exercise 3.1 - Data analysis with std::vector
- Exercise 3.2 - Data analysis with visualization (ROOT)

### Lesson 5: Classes and Inheritance
Object-oriented programming with inheritance.
- Exercise 5.0 - Creating the Position class
- Exercise 5.1 - Particle and Electron classes
- Exercise 5.2 - VectorField and MaterialPoint classes
- Exercise 5.3 - Electric field from dipole (ROOT visualization)

### Lesson 6: Abstract Classes and Root Finding
Polymorphism and numerical root finding algorithms.
- Exercise 6.0 - Virtual methods demonstration
- Exercise 6.1 - Abstract class FunctionBase
- Exercise 6.2 - Bisection method implementation
- Exercise 6.3 - Solving analytically unsolvable equations
- Exercise 6.4 - Root finding without polymorphism

### Lesson 7: Numerical Integration
Various numerical integration techniques.
- Exercise 7.0 - Midpoint method with fixed steps
- Exercise 7.1 - Simpson's rule integration
- Exercise 7.2 - Trapezoidal rule with adaptive precision

### Lesson 8: Differential Equations
Solving ordinary differential equations numerically.
- Exercise 8.0 - Vector algebra operations
- Exercise 8.1 - Euler's method for ODEs
- Exercise 8.2 - Runge-Kutta method
- Exercise 8.3 - Pendulum motion simulation
- Exercise 8.4 - Forced oscillations and resonance

### Lesson 10: Random Numbers and Monte Carlo
Random number generation and Monte Carlo integration.
- Exercise 10.0 - Random number generator implementation
- Exercise 10.2 - Monte Carlo integration methods

### Lesson 11: Monte Carlo Simulations
Experimental apparatus simulation.
- Exercise 11.0 - Prism spectrometer experiment simulation

---

## 🚀 Installation

### Prerequisites

#### For Basic Exercises
- C++ compiler (g++ 7.0 or higher)
- Make utility

```bash
# Install on Ubuntu/Debian
sudo apt-get update
sudo apt-get install build-essential
```

#### For Visualization Exercises (ROOT Framework)
Exercises with graphics (3.2, 5.3, 7.x, 8.1-8.4, 10.x, 11.x) require the ROOT Data Analysis Framework from CERN.

**Installation Steps:**

1. **Create ROOT directory:**
   ```bash
   mkdir -p ~/software
   cd ~/software
   ```

2. **Download ROOT binary:**
   
   For Ubuntu 22.04/24.04:
   ```bash
   wget https://root.cern/download/root_v6.30.02.Linux-ubuntu22.04-x86_64-gcc11.4.tar.gz
   ```
   
   Other systems: [https://root.cern/install/all_releases/](https://root.cern/install/all_releases/)

3. **Extract archive:**
   ```bash
   tar -xzf root_v6.30.02.Linux-ubuntu22.04-x86_64-gcc11.4.tar.gz
   ```

4. **Install dependencies:**
   ```bash
   sudo apt update
   sudo apt install -y libpcre3 libpcre3-dev libafterimage0 libafterimage-dev
   ```

5. **Configure shell:**
   ```bash
   echo 'source ~/software/root/bin/thisroot.sh 2>/dev/null' >> ~/.bashrc
   source ~/.bashrc
   ```

6. **Verify installation:**
   ```bash
   root --version
   ```

**Important Notes:**
- ROOT requires a compatible C++ compiler (g++-11 or newer)
- Graphics require X11 display server
- Always source ROOT before compiling: `source ~/software/root/bin/thisroot.sh`

**Alternative Installation:**

```bash
# Using Conda
conda create -n root-env root -c conda-forge
conda activate root-env
```

## 💻 Usage

### Compiling Exercises

Navigate to the exercise directory:
```bash
cd lesson1/exercise1.0
make
```

### Running Programs

After compilation:
```bash
./exercise1.0 <n_data> <filename>
```

For ROOT-based exercises:
```bash
# Ensure ROOT is sourced
source ~/software/root/bin/thisroot.sh

# Compile and run
make
./exercise3.2
```

### Cleaning Build Files

```bash
make clean
```

## 📁 Project Structure

```
experimental_data_processing_laboratory/
├── README.md              # This file
├── lesson1/               # Data analysis with arrays
│   ├── README.md
│   ├── data.dat
│   ├── exercise1.0/
│   ├── exercise1.1/
│   ├── exercise1.2/
│   └── exercise1.3/
├── lesson2/               # Vector class
│   ├── README.md
│   ├── data.dat
│   ├── exercise2.0/
│   └── exercise2.1/
├── lesson3/               # Templates and STL
│   ├── README.md
│   ├── data.dat
│   ├── exercise3.0/
│   ├── exercise3.1/
│   └── exercise3.2/
├── lesson5/               # Classes and inheritance
│   ├── README.md
│   ├── data.dat
│   ├── exercise5.0/ ... exercise5.3/
│   ├── fmt/               # Formatting library
│   ├── fmtlib.h
│   └── format.cc
├── lesson6/               # Abstract classes
│   ├── README.md
│   ├── exercise6.0/ ... exercise6.3.4/
│   ├── fmt/
│   ├── fmtlib.h
│   └── format.cc
├── lesson7/               # Numerical integration
│   ├── README.md
│   └── exercise7.0/ ... exercise7.2/
├── lesson8/               # Differential equations
│   ├── README.md
│   ├── exercise8.0/ ... exercise8.4/
│   ├── fmt/
│   ├── fmtlib.h
│   └── format.cc
├── lesson10/              # Monte Carlo methods
│   ├── README.md
│   └── exercise10.0/, exercise10.2/
└── lesson11/              # MC simulations
    ├── README.md
    └── exercise11.0/
```

Each exercise contains:
- **Source files**: .cpp/.h implementation files
- **Makefile**: Build configuration
- **README.md**: Detailed exercise explanation (in lesson folder)

## 🛠️ Requirements

### Software
- **C++ Compiler**: g++ 7.0 or higher (g++-11 recommended for ROOT)
- **Build System**: GNU Make
- **ROOT Framework**: v6.30.02 or higher (for visualization exercises)

### System
- **OS**: Linux (Ubuntu/Debian recommended), macOS
- **Architecture**: x86_64
- **Display**: X11 server (for ROOT graphics)

### Libraries
- Standard C++ Library (STL)
- ROOT CERN (for data visualization)
- fmtlib (included in lessons 5, 6, 8)

## 🙏 Acknowledgements

Course materials and exercises are based on lectures by **Professor Maurizio Tomasi** at University of Milan.

- GitHub: [ziotom78](https://github.com/ziotom78)
- Course: Experimental Data Processing Laboratory - UNIMI Physics Degree Program

The README.md files in each lesson directory are extracted from Professor Tomasi's lectures. Special thanks for the comprehensive teaching materials and excellent course design.

---

**Course**: Experimental Data Processing Laboratory  
**Institution**: University of Milan (UNIMI) - Physics Degree  
**Academic Year**: 2021