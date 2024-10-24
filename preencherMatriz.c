#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatriz(int a, int b, int mat[][1]) {

    srand(time(0));

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            mat[i][j] = rand()%10;
        }
    }
}
