#include <stdio.h>
#include <unistd.h>

void acenderLuz(int interruptor) {
    printf("Interruptor %d ligado\n", interruptor);
}

void apagarLuz(int interruptor) {
    printf("Interruptor %d desligado\n", interruptor);
}

void verificarLuz() {
    printf("Verificando lampadas...\n");
    printf("Lampada 1: Acende e esta quente ao toque\n");
    printf("Lampada 2: Acende e esta morna ao toque\n");
    printf("Lampada 3: Esta apagada e fria ao toque\n");
}

int main() {

    acenderLuz(1);
    sleep(5);

    apagarLuz(1);
    acenderLuz(2);
    sleep(1);

    verificarLuz();

    printf("Conclusao:\n");
    printf("Interruptor 1 controla a lampada quente ao toque.\n");
    printf("Interruptor 2 controla a lampada morna ao toque.\n");
    printf("Interruptor 3 controla a lampada fria e apagada.\n");

    return 0;
}
