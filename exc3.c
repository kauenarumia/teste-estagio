#include <stdio.h>

int main() {
    int INDICE = 12;
    int SOMA = 0;
    int K = 1;
    
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }
    
    printf("O valor final de SOMA eh: %d\n", SOMA);
    
    return 0;
}
