#include <stdio.h>

int main () {

    int valor[10];
    scanf("%d", &valor[0]);

    for(int i = 0; i < 9; i++) {
        valor[i+1] = valor[i] * 2;
    }

    for(int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, valor[i]);
    }

}