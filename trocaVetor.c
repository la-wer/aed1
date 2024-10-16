#include <stdio.h>

int main () {
    int n[20], res[20];
    
    for(int i = 0; i < 20; i++) {
        scanf("%d", &n[i]);
    }

    for(int j = 0, k = 19; j < 20; j++, k--) {
        res[k] = n[j];
    } 

    for(int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, res[i]);
    }
}