/*
Matrix.h

Matrix.h is a matrix library for C.
*/

#include <stdio.h>
#include <stdlib.h>

/*
*mat is a pointer to the matrix, with r and c being the matrix's dimensions

When matrix is created, (r*c) memory values are allocated.
*/
typedef struct{
  double *mat;
  unsigned int m;
  unsigned int n;
} matrix;

//createMatrix goes here
matrix createMatrix(unsigned int m, unsigned int n){
  matrix mt;
  mt.mat = (int *)malloc((size_t) (m * n));
  mt.m = m;
  mt.n = n;
  
  return mt;
}

matrix createMatrixFromArray(double *x, unsigned int m, unsigned int n){
  matrix mt = createMatrix(m, n);
  
  int i, j;
  for(i = 0; i < m; i++){
    for(j = 0; j < n; i++){
      mt.mat[i * n + j] = x[i * n + j];
    }
  }
  
  return mt;
}

double getValue(matrix mt, unsigned int m, unsigned int n){
  return mt.mat[m * mt.n + n];
}
