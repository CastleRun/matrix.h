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
  unsigned int c;
  unsigned int r;
} matrix;

//createMatrix goes here
matrix createMatrix(unsigned int c, unsigned int r){
  matrix m;
  m.mat = (int *)malloc((size_t) (c * r));
  m.c = c;
  m.r = r;
  
  return m;
}

matrix createMatrixFromArray(double *x, unsigned int c, unsigned int r){
  matrix m = createMatrix(c, r);
  
  int i, j;
  for(i = 0; i < c; i++){
    for(j = 0; j < r; i++){
      //Work
    }
  }
}

double getValue(matrix m, unsigned int c, unsigned int r){
  return m.mat[r * mat.c + c];
}
