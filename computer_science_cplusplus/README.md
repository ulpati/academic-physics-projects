# 💻 Computer Science - C++

Introduction to Computer Science with focus on structured programming using C++ language.

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

This repository contains all the code developed during the Computer Science course at University of Milan (UNIMI) Physics degree program. The course focuses on teaching fundamental programming concepts using C++, covering everything from basic syntax to data analysis with the ROOT framework.

Each lesson includes multiple exercises with complete implementations and explanations, progressing from simple programs to complex applications involving numerical methods and scientific data visualization.

## 📚 Course Objectives

The course aims to introduce the basics of Computer Science, with particular reference to Programming. It presents:

- Fundamentals of digital information representation and computer architecture
- The concept of algorithm and program
- Main tools involved in the software life cycle
- Structured programming and the imperative paradigm
- Software modularization techniques
- Notable data structures and algorithms
- Algorithmic time complexity evaluation

## 📖 Lessons Overview

### Lesson 2: Basic C++ Programming
Introduction to C++ syntax and basic operations.
- Exercise 1 - Hello World in C++
- Exercise 2 - Calculate rectangle area and perimeter
- Exercise 3 - Makefile
- Exercise 4 - Fix a program
- Exercise 5 - Input/output
- Exercise 6 - cout notation
- Exercise 7 - Temperature conversion

### Lesson 3: Strings, I/O, and Conditionals
Working with strings, file operations, and basic control structures.
- Exercise 1 - Increment/decrement operations
- Exercise 2 - Even and odd numbers
- Exercise 3 - string and char manipulation
- Exercise 4 - File output operations
- Exercise 5 - File input operations

### Lesson 4: Control Structures
Advanced conditional statements and switch cases.
- Exercise 1 - Temperature conversions
- Exercise 2 - Quadratic equation solver
- Exercise 3 - Bicycle frame choice
- Exercise 4 - Switch statement usage

### Lesson 5: Loops
Mastering iteration with for, while, and do/while loops.
- Exercise 1 - Hello World with different loops
- Exercise 2 - Calculate average (terminal input)
- Exercise 3 - Counter of even and odd numbers
- Exercise 4 - Calculate average (file input)
- Exercise 5 - Fibonacci sequence generator

### Lesson 6: Arrays
Working with one-dimensional and multi-dimensional arrays.
- Exercise 1 - Hello World with arrays
- Exercise 2 - Dot product calculation
- Exercise 3 - Matrix multiplication
- Exercise 4 - Linear motion simulation
- Exercise 5 - Find the Higgs boson mass

### Lesson 7: Pointers and Functions
Understanding memory management and function design.
- Exercise 1 - Hello World with pointers
- Exercise 2 - Hello World with functions
- Exercise 3 - Numerical integration of Gaussian function
- Exercise 4 - Point discriminator
- Exercise 5 - Dot product, norm, transpose matrix

### Lesson 8: Data Structures
Introduction to structs and modular programming.
- Exercise 1 - Hello World with struct
- Exercise 2 - Swap by reference or pointer
- Exercise 4 - Random number generation
- Exercise 5 - Function for exercise 1
- Exercise 6 - Distance between points

### Lesson 9: ROOT Framework Introduction
Basic plotting and visualization with ROOT.
- Exercise 1 - Simple function plotting
- Exercise 2 - Multiple functions on same canvas
- Exercise 3 - Advanced plotting techniques
- Exercise 4 - Custom function styling
- Exercise 5 - Complex visualizations

### Lesson 10: Data Filtering and Error Bars
Advanced ROOT features for data analysis.
- Exercise 1 - Data filtering from files
- Exercise 2 - Error bar plotting

### Lesson 11: Histograms
Working with histograms in ROOT.
- Exercise 2 - Basic histogram creation
- Exercise 3 - Histogram manipulation
- Exercise 4 - Advanced histogram features

---

## 🚀 Installation

### Prerequisites

#### For Lessons 2-8 (Basic C++)
- C++ compiler (g++ 7.0 or higher)
- Make utility

```bash
# Install on Ubuntu/Debian
sudo apt-get update
sudo apt-get install build-essential
```

#### For Lessons 9-11 (ROOT Framework)
ROOT Data Analysis Framework from CERN is required.

**Recommended Installation (Pre-compiled Binaries):**

1. **Create a directory for ROOT:**
   ```bash
   mkdir -p ~/software
   cd ~/software
   ```

2. **Download the appropriate ROOT binary:**
   
   For Ubuntu 22.04/24.04:
   ```bash
   wget https://root.cern/download/root_v6.30.02.Linux-ubuntu22.04-x86_64-gcc11.4.tar.gz
   ```
   
   For other systems: [https://root.cern/install/all_releases/](https://root.cern/install/all_releases/)

3. **Extract the archive:**
   ```bash
   tar -xzf root_v6.30.02.Linux-ubuntu22.04-x86_64-gcc11.4.tar.gz
   ```

4. **Install dependencies:**
   ```bash
   sudo apt update
   sudo apt install -y libpcre3 libpcre3-dev libafterimage0 libafterimage-dev
   ```

5. **Add ROOT to shell configuration:**
   ```bash
   echo 'source ~/software/root/bin/thisroot.sh 2>/dev/null' >> ~/.bashrc
   source ~/.bashrc
   ```

6. **Verify installation:**
   ```bash
   root --version
   ```

**Alternative Methods:**

- **Using Conda:**
  ```bash
  conda create -n root-env root -c conda-forge
  conda activate root-env
  ```

- **Build from source:** [https://root.cern/install/build_from_source/](https://root.cern/install/build_from_source/)

## 💻 Usage

### Compiling Exercises

Navigate to any lesson directory:
```bash
cd lesson2  # or any other lesson
make
```

### Running Programs

After compilation, execute the generated binary:
```bash
./exercise1
```

For ROOT exercises (lessons 9-11):
```bash
# Ensure ROOT is sourced first
source ~/software/root/bin/thisroot.sh

# Compile and run
make
./exercise1
```

### Cleaning Build Files

```bash
make clean
```

## 📁 Project Structure

```
computer_science_cplusplus/
├── README.md              # This file
├── lesson2/               # Basic C++ programming
│   ├── README.md
│   ├── exercise1.cc ... exercise7.cc
│   └── makefile
├── lesson3/               # Strings and I/O
│   ├── README.md
│   ├── exercise1.cc ... exercise5.cc
│   ├── makefile
│   └── myinput.dat
├── lesson4/               # Control structures
│   └── ...
├── lesson5/               # Loops
│   ├── data.dat
│   └── ...
├── lesson6/               # Arrays
│   └── ...
├── lesson7/               # Pointers and functions
│   └── ...
├── lesson8/               # Data structures
│   └── ...
├── lesson9/               # ROOT basics
│   ├── data.dat
│   └── ...
├── lesson10/              # Data filtering
│   └── ...
└── lesson11/              # Histograms
    └── ...
```

Each lesson contains:
- **README.md**: Detailed explanations of exercises
- **exercise*.cc**: Source code files
- **makefile**: Build configuration
- **data files**: Input data where needed

## 🛠️ Requirements

### Software
- **C++ Compiler**: g++ 7.0 or higher
- **Build System**: GNU Make
- **ROOT Framework**: v6.30.02 or higher (for lessons 9-11)

### System
- **OS**: Linux (Ubuntu/Debian recommended), macOS
- **Architecture**: x86_64

## 🙏 Acknowledgements

Course materials and exercises are based on lectures by **Professor Stefano Carrazza** at University of Milan.

- GitHub: [scarrazza](https://github.com/scarrazza)
- Course: Computer Science - UNIMI Physics Degree Program

Special thanks to the professor for the excellent teaching materials and guidance throughout the course.

---

**Course**: Computer Science  
**Institution**: University of Milan (UNIMI) - Physics Degree  
**Academic Year**: 2020