#include <stdio.h>

int main() {

    float premio, ganhador1, ganhador2, ganhador3;

    premio = 780000;
    ganhador1 = premio * 0.5;
    ganhador2 = premio * 0.3;
    ganhador3 = premio * 0.2;

    printf("Distribuição do premio entre os ganhadores:");
    printf("\nGanhador 1: %.2f", ganhador1);
    printf("\nGanhador 2: %.2f", ganhador2);
    printf("\nGanhador 3: %.2f", ganhador3);
    printf("Premio total: %.2f", (ganhador1 + ganhador2 + ganhador3));
    return 0;
}
