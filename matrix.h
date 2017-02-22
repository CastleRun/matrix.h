/*
Matrix.h

Matrix.h is a matrix library for C.
*/

#include <stdio.h>

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
