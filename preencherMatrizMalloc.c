#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *preencherMatriz(int a, int b) {

    srand(time(0));

    int *mat = (int*) malloc(a * b * sizeof(int));

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            *(mat + a * i + j) = rand()%10;
        }
    }
    return mat;
}
