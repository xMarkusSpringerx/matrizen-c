#include "matrix.h"

int main() {

    int type;
    printf("Bitte geben Sie 1 für Addition, 2 für eine Multiplikation und 3 für die Transponierung: ");
    scanf("%d", &type);

    if(type == 1) {
        matrix matr1, matr2;
        int rows, cols;
        printf("Anzahl Zeilen und Spalten der Matrizen getrennt mit Enter: ");
        scanf("%d%d", &rows, &cols);

        int i,j;

        srand(time(NULL));
        for(i=0; i < rows; i++) {
            for(j=0; j < cols; j++) {

                matr1[i][j] = rand()%10;
                matr2[i][j] = rand()%10;
            }
        }

        printf("Matrix 1:\n");
        MatrixPrint(matr1, rows, cols);
        printf("Matrix 2:\n");
        MatrixPrint(matr2, rows, cols);

        printf("Addieren 1+2:\n");
        MatrixAdd(matr1, matr2, rows, cols);

    } else if( type == 2) {

        matrix a, b;
        int r1, c1, r2, c2, i, j, k;

        printf("Anzahl Zeilen und Spalten der ersten Matrix getrennt mit Enter: ");
        scanf("%d%d", &r1, &c1);
        printf("Anzahl Zeilen und Spalten der zweiten Matrix getrennt mit Enter: ");
        scanf("%d%d",&r2, &c2);

        if (c1!=r2)
        {
            printf("Bitte geben Sie es formal richtig ein. Die Spaltenanzahl der \nersten Matrix muss gleich der Zeilenanzahl der zweiten Matrix sein\n");
            return -1;
        }

        srand(time(NULL));

        for(i=0; i<r1; i++)
            for(j=0; j<c1; j++)
            {
                a[i][j] = rand()%10;
            }

        for(i=0; i<r2; ++i)
            for(j=0; j<c2; ++j)
            {
                b[i][j] = rand()%10;
            }

            MatrixPrint(a, r1, c1);
            MatrixPrint(b, r2, c2);

        MatrixMult(a, b, r1, c1, c2);


    } else if( type == 3) {
        int i, j, rows, cols;
        matrix matr;

        printf("Anzahl Zeilen und Spalten der Matrix getrennt mit Enter: ");
        scanf("%d%d", &rows, &cols);

        srand(time(NULL));
        for(i=0; i < rows; i++) {
            for(j=0; j < cols; j++) {
                matr[i][j] = rand()%10;
            }
        }

        MatrixPrint(matr, rows, cols);

        MatrixTranspose(matr,rows, cols);

    } else {
        printf("Bitte geben Sie eine valide Zahl ein");
    }

    return 0;
}