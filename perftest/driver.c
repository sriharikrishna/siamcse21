#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void fun(int n, float a[n], int m, float b[m]);
void fun_d(int n, float a[n], float ad[n], int m, float b[m], float bd[m]);
void fun_b(int n, float a[n], float ab[n], int m, float b[m], float bb[m]);

int main(int argc, char** argv) {
  /*
  Problem setup. Get input/output size, allocate memory, etc.
  */
  if(argc < 3) {
    printf("Usage: driver <num_inputs> <num_outputs>");
    return -1;
  }
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  printf("===============================================\n");
  printf("Running function with %d inputs and %d outputs.\n",n,m);
  float* a = (float*)malloc(n*sizeof(float));
  float* a_seed = (float*)malloc(n*sizeof(float));
  for(int i=0; i<n; i++) {
    a[i] = (float)i;
    a_seed[i] = 0;
  }
  float* b = (float*)malloc(m*sizeof(float));
  float* b_seed = (float*)malloc(m*sizeof(float));
  for(int i=0; i<m; i++) {
    b_seed[i] = 0;
  }
  float* J_fwd = (float*)malloc(n*m*sizeof(float));
  float* J_rev = (float*)malloc(n*m*sizeof(float));
  clock_t tic, toc;
  double primaltime, difftime;

  /*
  Run the primal function and time it
  */
  tic = clock();
  fun(n, a, m, b);
  toc = clock() - tic;
  primaltime = (double)toc / (double)CLOCKS_PER_SEC;
  printf("primal time: %f\n", primaltime);

  printf("\nComputing one row/column of Jacobian:\n");
  /*
  Run the forward-mode once
  */
  tic = clock();
  a_seed[0] = 1.0;
  fun_d(n, a, a_seed, m, b, &J_fwd[0]);
  a_seed[0] = 0.0;
  toc = clock() - tic;
  difftime = (double)toc / (double)CLOCKS_PER_SEC;
  printf("forward Jv time: %f (overhead: %f X)\n", difftime, difftime/primaltime);

  /*
  Run the reverse-mode once
  */
  tic = clock();
  b_seed[0] = 1.0;
  fun_b(n, a, &J_rev[0], m, b, b_seed);
  b_seed[0] = 0.0;
  toc = clock() - tic;
  difftime = (double)toc / (double)CLOCKS_PER_SEC;
  printf("reverse vJ time: %f (overhead: %f X)\n", difftime, difftime/primaltime);

  printf("\nComputing the entire Jacobian:\n");
  /*
  Run the forward-mode n times (enough to obtain the entire Jacobian).
  */
  tic = clock();
  for(int i=0; i<n; i++) {
    a_seed[i] = 1.0;
    fun_d(n, a, a_seed, m, b, &J_fwd[i*m]);
    a_seed[i] = 0.0;
  }
  toc = clock() - tic;
  difftime = (double)toc / (double)CLOCKS_PER_SEC;
  printf("forward J time: %f (overhead: %f X)\n", difftime, difftime/primaltime);

  /*
  Run the reverse-mode m times (enough to obtain the entire Jacobian).
  */
  tic = clock();
  for(int i=0; i<m; i++) {
    b_seed[i] = 1.0;
    fun_b(n, a, &J_rev[i*n], m, b, b_seed);
    b_seed[i] = 0.0;
  }
  toc = clock() - tic;
  difftime = (double)toc / (double)CLOCKS_PER_SEC;
  printf("reverse J time: %f (overhead: %f X)\n", difftime, difftime/primaltime);

  /*
  Compare the computed Jacobians
  */
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      if(J_fwd[i*m+j] != J_rev[j*n+i]) {
        printf("Jacobian from fwd and rev does not match!\n");
      }
    }
  }
  printf("Jacobian from fwd and rev matches!\n\n");

  free(a); free(b); free(a_seed); free(J_fwd); free(J_rev); free(b_seed);
  return 0;
}
