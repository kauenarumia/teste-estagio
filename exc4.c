#include <stdio.h>

int main() {
    //Sequência: 1, 3, 5, 7, _
    int a_num_ant = 7;
    int a_diff = 2;
    int a_prox_num = a_num_ant + a_diff;
    printf("Sequencia A) O proximo numero eh: %d\n", a_prox_num);

    //Sequência: 2, 4, 8, 16, 32, 64, ____
    int b_ult_num = 64;
    int b_prox_num = b_ult_num * 2;
    printf("Sequencia B) O proximo numero eh: %d\n", b_prox_num);

    //Sequência: 0, 1, 4, 9, 16, 25, 36, ____
    int c_n = 7; //n^2
    int c_prox_num = c_n * c_n;
    printf("Sequencia C) O proximo numero eh: %d\n", c_prox_num);

    //Sequência: 4, 16, 36, 64, ____
    int d_n = 10; //prox num_par^2
    int d_prox_num = d_n * d_n;
    printf("Sequencia D) O proximo numero eh: %d\n", d_prox_num);

    // Parte e) Sequência: 1, 1, 2, 3, 5, 8, ____
    int e_a = 5, e_b = 8; //sequência de fibonacci
    int e_prox_num = e_a + e_b;
    printf("Sequencia E) O proximo numero eh: %d\n", e_prox_num);

    // Parte f) Sequência: 2, 10, 12, 16, 17, 18, 19, ____
    int f_prox_num = 20; //A sequencia nao segue um padrao aritmetico
    printf("Sequencia F) O proximo numero eh: %d\n", f_prox_num);

    return 0;
}
