#if !defined matrix_h
#define matrix_h

    #include <stdlib.h>
    #include <stdio.h>
    #include <time.h>

    #define MAX 10

    typedef int matrix[MAX][MAX];


    void MatrixPrint(matrix m, int rows, int cols);
    void MatrixAdd(matrix m1, matrix m2, int rows, int cols);
    void MatrixMult(matrix a, matrix b, int r1, int c1, int c2);
    void MatrixTranspose(matrix matr, int rows, int cols);

#endif matrix_h
