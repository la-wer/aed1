#include <stdio.h>

int main () {
    int n, maior = 0, pos = 0;
    scanf("%d", &n);
    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++) {
        if (vetor[i] >= maior) {
            maior = vetor[i];
            pos = i;
        }
    }

    printf("%d %d", maior, pos);
}