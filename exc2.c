#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Informe uma string: ");
    fgets(str, sizeof(str), stdin);
    
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    if (count > 0) {
        printf("A letra 'a' ocorre %d vez(es) na fraase.\n", count);
    } else {
        printf("A letra 'a' nao foi encontrada na frase.\n");
    }

    return 0;
}


//O CODIGO DIZ APRESENTAR UM ERRO MAS ESTA FUNCIONANDO NORMALMENTE