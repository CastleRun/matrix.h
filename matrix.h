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
  int *mat;
  int c;
  int r;
} matrix;

//createMatrix goes here
matrix createMatrix(int c, int r){
  matrix m;
  m.mat = (int *)malloc((size_t) (r * c));
  m.c = c;
  m.r = r;
  
  return m;
}
