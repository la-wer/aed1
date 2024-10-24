#include <stdio.h>

void imprimirMatriz(int a, int b, int mat[][1]) {

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}
