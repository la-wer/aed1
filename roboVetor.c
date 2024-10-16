#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int ciclo[2 * N];
    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &ciclo[i]);
    }

    int soldado[N + 1];
    for (int i = 1; i <= N; i++) {
        soldado[i] = 0;
    }

    int pontos_cobertos = 0;

    for (int i = 0; i < 2 * N; i++) {
        int ponto_atual = ciclo[i];
        if (soldado[ponto_atual] == 0) {
            soldado[ponto_atual] = 1;
            pontos_cobertos++;
        }
        if (pontos_cobertos == N) {
            printf("%d\n", i + 1);
            return 0;
        }
    }

    printf("0\n");
    
    return 0;
}
 