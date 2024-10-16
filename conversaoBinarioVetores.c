#include <stdio.h>
#include <math.h>

int main () {
    int n, res = 0;
    scanf("%d", &n);
    int  bin[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &bin[i]);
    }

    for (int i = 0; i < n; i++) {
        res = res + bin[i] * pow(2.0, n - 1 - i);
    }

    printf("%d", res);
}