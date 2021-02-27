# Automatic Differentiation as a Tool for Computational Science
https://www.siam.org/conferences/cm/program/minitutorials/cse21-minitutorials


## Session 1: Wednesday, March 3, 2:15 p.m. - 4:00 p.m. CST
1. Introduction
2. Seed matrices
3. Demo & Hands on: AD basics using rosenbrock function

## Session 2: Thursday, March 4, 9:45 a.m. - 11:30 a.m. CST
1. Memory requirements
2. Automatic differentiation for parallel  programs
3. Know what you are differentiating
4. Adding AD to existing code
5. Demo & Hands on: Derivative based optimization using stream_vel

## How to run the notebooks
### Option 1 (preferred): Using Google Colab. (You will need to login to your Google account)
1. Browse this repository to the file you want.
2. Click on the *Open in Colab* button

### Option 2: Use Jupyter Notebook locally 
1. Clone this repository or download it
2. Install any prerequisites
        pip install jupyterlab
        pip install jax
        pip install jaxlib
3. Open the notebook
        jupyter notebook rosenbrock.ipynb

### Option 3: Use python version locally
1. Clone this repository or download it
2. Install any prerequisites
        pip install jax
        pip install jaxlib
3. Run the python code
        python rosenbrock.ipynb
