# Automatic Differentiation as a Tool for Computational Science
https://www.siam.org/conferences/cm/program/minitutorials/cse21-minitutorials


## Session 1: Wednesday, March 3, 2:15 p.m. - 4:00 p.m. CST
| Content      | Resources |
| ----------- | ----------- |
| Introduction      | Slides       |
| Seed matrices   | Slides        |
| Demo & Hands on: AD basics | [![Open In Collab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/sriharikrishna/siamcse21/blob/main/rosenbrock.ipynb)|

## Session 2: Thursday, March 4, 9:45 a.m. - 11:30 a.m. CST
| Content      | Resources |
| ----------- | ----------- |
| Memory requirements      | Slides       |
| Automatic differentiation for parallel  programs  | Slides        |
|  Know what you are differentiating      | Slides       |
| Adding AD to existing code   | Slides        |
| Demo & Hands on: Derivative based optimization | [![Open In Collab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/sriharikrishna/siamcse21/blob/main/stream_vel_nonlinearopt_w_jax.ipynb)|

## How to run the notebooks
### Option 1 (preferred): Using Google Colab. (You will need to login to your Google account)
1. Click on the [![Open In Collab](https://colab.research.google.com/assets/colab-badge.svg)]() button for the session

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
        python rosenbrock.py
