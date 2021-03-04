# Automatic Differentiation as a Tool for Computational Science
https://www.siam.org/conferences/cm/program/minitutorials/cse21-minitutorials


## Session 1: Wednesday, March 3, 4:15 p.m. - 5:55 p.m. CST
| Content      | Resources |
| ----------- | ----------- |
| Introduction      | [Slides](https://github.com/sriharikrishna/siamcse21/blob/main/slides/SIAMCSE21_Intro.pdf)       |
| Seed matrices   | [Slides](https://github.com/sriharikrishna/siamcse21/blob/main/slides/SIAMCSE21_Seeding.pdf)         |
| Demo & Hands on: Rosenbrock | [![Open In Collab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/sriharikrishna/siamcse21/blob/main/rosenbrock.ipynb)|
| Demo & Hands on: Scalar | [![Open In Collab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/sriharikrishna/siamcse21/blob/main/scalar.ipynb)|
| Demo & Hands on: Performance testing | [![Open In Collab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/sriharikrishna/siamcse21/blob/main/perftest.ipynb)|
## Session 2: Thursday, March 4, 9:45 a.m. - 11:25 a.m. CST
| Content      | Resources |
| ----------- | ----------- |
| Memory requirements      | [Slides](https://github.com/sriharikrishna/siamcse21/blob/main/slides/SIAMCSE21_Memory.pdf)       |
| Demo & Hands on: Derivative based optimization | [![Open In Collab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/sriharikrishna/siamcse21/blob/main/stream_vel_nonlinearopt_w_jax.ipynb)|
|  Know what you are differentiating      | [Slides](https://github.com/sriharikrishna/siamcse21/blob/main/slides/SIAMCSE21_Knowwhat.pdf)       |
| Adding AD to existing code   | [Slides](https://github.com/sriharikrishna/siamcse21/blob/main/slides/SIAMCSE21_Large.pdf)         |
| Demo & Hands on: Dot product test | [![Open In Collab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/sriharikrishna/siamcse21/blob/main/rosenbrock_dot.ipynb)|
| Automatic differentiation for parallel  programs  | [Slides](https://github.com/sriharikrishna/siamcse21/blob/main/slides/SIAMCSE21_Parallel.pdf)        |
| Hessians and higher-order derivatives   | [Slides](https://github.com/sriharikrishna/siamcse21/blob/main/slides/SIAMCSE21_Higher.pdf)        |
| Appendix   | [Slides](https://github.com/sriharikrishna/siamcse21/blob/main/slides/SIAMCSE21_Appendix.pdf)        |



## How to run the notebooks
### Option 1 (preferred): Using Google Colab. (You will need to login to your Google account)
1. Click on the [![Open In Collab](https://colab.research.google.com/assets/colab-badge.svg)]() button for the session

### Option 2: Use Jupyter Notebook locally 
1. Clone this repository or download it
2. Install any prerequisites
```
pip install jupyterlab
pip install jax
pip install jaxlib
```
3. Open the notebook
```
jupyter notebook rosenbrock.ipynb
```
### Option 3: Use python version locally
1. Clone this repository or download it
2. Install any prerequisites
```
pip install jax
pip install jaxlib
```
3. Run the python code
```
python rosenbrock.py
```
