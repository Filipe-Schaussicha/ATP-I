#include <stdio.h>

int main() {

    float wat, tempoH, kwatDia, kwatPreco;

    kwatPreco = 0.27;

    printf("Digite a potencia do aparelho (Em Watts) e o tempo (Em horas) que ele ficou ligado:\n");
    scanf("%f", &wat);
    scanf("%f", &tempoH);

    kwatDia =  (wat * tempoH) / 1000;

    printf("\nO seu aparelho vai gastar %.2f Kwh", kwatDia);
    printf("\nNo mes voce vai gastar: %.2f Kwh", kwatDia * 30);
    printf("\nNo ano voce vai gastar: %.2f Kwh", kwatDia * 30 * 12);
    printf("\nO seu gasto mensal vai ser de %.2f Reais", (kwatDia * 30) * kwatPreco);

return 0;
}
