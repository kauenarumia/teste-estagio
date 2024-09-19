#include <stdio.h>

int fibonacci(int n1) {
    int a = 0, b = 1, aux;
    
    if (n1 == 0 || n1 == 1) {
        return 1;
    }

    while (b <= n1) {
        if (b == n1) {
            return 1;
        }
        aux = b;
        b = a + b;
        a = aux;
    }
    
    return 0;
}

int main() {
    int n2;
    
    printf("Informe um numero: ");
    scanf("%d", &n2);
    
    if (fibonacci(n2)) {
        printf("%d esta na sequencia de fibonacci.\n", n2);
    } else {
        printf("%d nao esta na sequencia de fibonacci.\n", n2);
    }
    
    return 0;
}
