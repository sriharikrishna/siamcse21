# Automatic Differentiation as a Tool for Computational Science
https://www.siam.org/conferences/cm/program/minitutorials/cse21-minitutorials


## Session 1: Wednesday, March 3, 2:15 p.m. - 4:00 p.m. CST
| Content      | Resources |
| ----------- | ----------- |
| Introduction      | Slides       |
| Seed matrices   | Slides        |
| Demo & Hands on: AD basics | [Notebook](https://colab.research.google.com/github/sriharikrishna/siamcse21/blob/main/rosenbrock.ipynb)        |

## Session 2: Thursday, March 4, 9:45 a.m. - 11:30 a.m. CST
| Content      | Resources |
| ----------- | ----------- |
| Memory requirements      | Slides       |
| Automatic differentiation for parallel  programs  | Slides        |
|  Know what you are differentiating      | Slides       |
| Adding AD to existing code   | Slides        |
| Demo & Hands on: Derivative based optimization | [Notebook](https://colab.research.google.com/github/sriharikrishna/siamcse21/blob/main/stream_vel_nonlinearopt_w_jax.ipynb)        |

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
        python rosenbrock.py
