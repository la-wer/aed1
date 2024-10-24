#include <stdio.h>

int somaAcimaDs(int a, int b, int mat[][1]) {

    int soma = 0;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (j + i < b - 1) {
                soma = soma + mat[i][j];
            }
        }
    }
    return soma;
}
