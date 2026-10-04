# 📊 Statistical Physics Simulations

Computational statistical physics projects with Monte Carlo simulations, random walks, and epidemic models.

[![License](https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg)](../LICENSE)
[![Language](https://img.shields.io/badge/Language-Python-blue.svg)]()
[![Course](https://img.shields.io/badge/Course-UNIMI%20Physics-green.svg)]()
[![Framework](https://img.shields.io/badge/Framework-Jupyter-orange.svg)]()

## 📋 Table of Contents

- [Overview](#-overview)
- [Projects](#-projects)
  - [Ising Model](#ising-model)
  - [Random Walks](#random-walks)
  - [SIR Epidemic Model](#sir-epidemic-model)
- [Installation](#-installation)
- [Usage](#-usage)
- [Project Structure](#-project-structure)
- [Requirements](#️-requirements)
- [Acknowledgements](#-acknowledgements)

## 🎯 Overview

This repository contains Jupyter notebooks developed during the Statistical Physics course at University of Milan (UNIMI). The projects explore fundamental concepts in statistical mechanics through computational simulations, demonstrating phase transitions, stochastic processes, and epidemic spreading on networks.

The simulations combine theoretical physics with practical computational methods, implementing algorithms like Metropolis-Hastings, Wolff cluster updates, and network-based epidemic models. All projects include detailed explanations, visualizations, and quantitative analysis.

## 📚 Projects

### Ising Model
**Notebook**: `ising_model.ipynb`  
**Topics**: Phase transitions, critical phenomena, Monte Carlo methods

Comprehensive study of the 2D Ising model of ferromagnetism:
- **Metropolis Algorithm** - Single spin-flip Monte Carlo dynamics
- **Wolff Algorithm** - Cluster update method for faster equilibration
- **Phase Transitions** - Critical temperature and spontaneous magnetization
- **Thermodynamic Properties** - Magnetization, susceptibility, specific heat
- **Cluster Analysis** - Percolation and critical behavior
- **Finite-Size Scaling** - System size effects near criticality

**Key Results:**
- Critical temperature: $T_c = \frac{2}{\ln(1+\sqrt{2})} \approx 2.269$
- Power law behavior at critical point: $M \sim (T_c - T)^\beta$ with $\beta = 1/8$
- Cluster size distribution follows percolation scaling
- Wolff algorithm significantly reduces critical slowing down

---

### Random Walks
**Notebook**: `random_walks.ipynb`  
**Topics**: Stochastic processes, diffusion, self-avoiding walks

Exploration of random walk processes in various dimensions:
- **Returns to Origin** - Probability analysis in 1D, 2D, 3D
- **Mean Squared Displacement** - Diffusive behavior and scaling
- **Self-Avoiding Walks (SAW)** - Constrained random walks
- **Pivot Algorithm** - Efficient SAW generation and sampling
- **Critical Exponents** - Scaling relations and universality

**Key Concepts:**
- **Pólya's Theorem**: 
  - 1D and 2D random walks are recurrent (certain return to origin)
  - 3D random walks are transient (finite return probability ≈ 0.34)
- **Simple Random Walk Scaling**: 
  - Mean squared displacement: $\langle R^2 \rangle \sim N$ (diffusive behavior)
  - Root mean square: $R_{rms} \sim \sqrt{N}$
- **Self-Avoiding Walk (SAW)**: 
  - End-to-end distance: $\langle R^2 \rangle \sim N^{2\nu}$
  - Critical exponent in 2D: $\nu \approx 0.75$ (exactly 3/4)
  - Non-universal behavior distinguishes SAW from simple walks

---

### SIR Epidemic Model
**Notebook**: `sir_model.ipynb`  
**Topics**: Epidemiology, network dynamics, critical phenomena

Study of epidemic spreading using the SIR (Susceptible-Infected-Recovered) model:
- **ODE Solutions** - Fully mixed population dynamics
- **Network Epidemics** - Spreading on complex networks
- **Critical Transmissibility** - Epidemic threshold analysis
- **Network Structure Effects** - Influence of topology on spreading
- **Comparison with Theory** - Validation against Newman's analytical results

**Network Types:**
- Erdős-Rényi random graphs (Poisson degree distribution)
- Barabási-Albert scale-free networks (power-law degree distribution)
- Configuration model networks (arbitrary degree sequences)

**Key Results:**
- **Epidemic Threshold**: Transmissibility $T = \beta/\gamma$ must exceed $T_c = \frac{\langle k \rangle}{\langle k^2 \rangle - \langle k \rangle}$
  - Below threshold ($T < T_c$): exponential decay (no epidemic)
  - Above threshold ($T > T_c$): exponential growth (epidemic spread)
- **Phase Transition**: Sharp transition between endemic and epidemic regimes
- **Network Heterogeneity**: 
  - Scale-free networks have lower epidemic thresholds
  - Hubs act as super-spreaders in heterogeneous networks
- **Agreement with Newman's Theory**: Simulation results match analytical predictions

---

## 🚀 Installation

### Prerequisites

Python 3.7 or higher is required.

### Dependencies

Install required packages:

```bash
# Using pip
pip install jupyter numpy matplotlib scipy networkx seaborn

# On Ubuntu/Debian systems
sudo apt install python3-ipykernel python3-numpy python3-matplotlib python3-scipy python3-networkx python3-seaborn
```

### Setup

```bash
# Clone repository (if not already cloned)
git clone https://github.com/ulpati/academic-physics-projects.git
cd academic-physics-projects/statistical_physics

# Verify installation
python3 -c "import numpy, matplotlib, scipy, networkx, seaborn; print('All packages installed successfully!')"
```

## 💻 Usage

### Running Notebooks

1. **Launch Jupyter Notebook:**
   ```bash
   jupyter notebook
   ```

2. **Open a notebook:**
   - Navigate to one of the `.ipynb` files
   - Click to open in your browser

3. **Run cells sequentially:**
   - Use `Shift+Enter` to execute cells
   - Or use "Run All" from the Cell menu

### Quick Start Examples

```bash
# Start Jupyter and open Ising model
jupyter notebook ising_model.ipynb

# Or use JupyterLab for enhanced interface
jupyter lab
```

### Using the Code Module

The `code/ising_sethna.py` module can be imported:

```python
from code.ising_sethna import IsingModel

# Create Ising model instance
model = IsingModel(N=50, T=2.269, seed=42)

# Run simulation
# ... (see notebook for details)
```

## 📁 Project Structure

```
statistical_physics/
├── README.md                  # This file
├── ising_model.ipynb          # 2D Ising model simulations
├── random_walks.ipynb         # Random walk analysis
├── sir_model.ipynb            # SIR epidemic model
├── code/                      # Python modules
│   └── ising_sethna.py        # Efficient Ising implementation
└── images/                    # Generated visualizations
    └── (plots created by notebooks)
```

### Notebook Contents

Each notebook includes:
- **Theoretical Background** - Mathematical foundations
- **Implementation** - Well-documented code
- **Visualizations** - Publication-quality plots
- **Analysis** - Quantitative results and discussion

## 🛠️ Requirements

### Software
- **Python**: 3.7 or higher
- **Jupyter**: Notebook or JupyterLab

### Python Packages
- **NumPy**: ≥1.19.0 - Numerical computations
- **Matplotlib**: ≥3.3.0 - Plotting and visualization
- **SciPy**: ≥1.5.0 - Scientific computing, ODE solvers
- **NetworkX**: ≥2.5 - Network/graph algorithms
- **Seaborn**: ≥0.11.0 - Statistical visualization

### System
- **OS**: Linux, macOS, Windows
- **RAM**: 4GB minimum (8GB recommended for large simulations)
- **Disk**: ~100MB for notebooks and generated data

## 🙏 Acknowledgements

These projects were developed as part of the **Statistical Physics** course taught by **Professor Stefano Zapperi** at the University of Milan.

- GitHub: [SZapperi](https://github.com/SZapperi)
- Course: Statistical Physics - UNIMI Physics Degree Program

The `ising_sethna.py` module is adapted from James Sethna's computational physics materials from Cornell University.

Special thanks to Professor Zapperi for the excellent course and for introducing computational methods in statistical physics.

---

**Course**: Statistical Physics  
**Institution**: University of Milan (UNIMI) - Physics Degree  
**Academic Year**: 2022  
**Author**: [ulpati](https://github.com/ulpati)