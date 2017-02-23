
#define MAX 10

typedef int matrix[MAX][MAX];


void MatrixPrint(matrix m, int rows, int cols){
    int i, j;
    for (i=0; i<rows; i++) {
        for(j=0; j<cols; j++)
            printf("%d     ", m[i][j]);
        printf("\n");
    }
}


void MatrixAdd(matrix m1, matrix m2, int rows, int cols) {
    matrix res;
    int i, j;
    for (i=0; i<rows; i++) {
        for(j=0; j<cols; j++) {
            res[i][j] = m1[i][j] + m2[i][j];

        }
    }

    MatrixPrint(res, rows, cols);
}

void MatrixMult(matrix a, matrix b, int r1, int c1, int c2) {

    int i, j, k;
    matrix mult;

    /* Initialize*/
    for(i=0; i<r1; ++i) {
        for(j=0; j<c2; ++j) {
            mult[i][j]=0;
        }
    }

    for(i=0; i<r1; i++) {
        for(j=0; j<c2; ++j) {
            for(k=0; k<c1; ++k) {
                mult[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\n Ergebnis: \n");
    MatrixPrint(mult, r1, c2);
}


void MatrixTranspose(matrix matr, int rows, int cols) {
    int i, j;
    matrix res;

    for (i = 0; i < rows; i++) {
        for( j = 0 ; j < cols ; j++ ) {
            res[j][i] = matr[i][j];
        }
    }
    printf("\n Ergebnis: \n");
    MatrixPrint(res, cols, rows);
}
