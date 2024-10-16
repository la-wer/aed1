#include <stdio.h>

int main() {
    int T, N;
    unsigned long long fibonacci[61];
    
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    for (int i = 2; i <= 60; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    scanf("%d", &T);
    int casos[T];

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        casos[i] = N;
    }

    for (int i = 0; i < T; i++) {
        printf("Fib(%d) = %llu\n", casos[i], fibonacci[casos[i]]);
    }

    return 0;
}
