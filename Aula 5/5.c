#include <stdio.h>

int main() {

float diaria, imposto;
int dias;

diaria = 30;
imposto = 0.08;

printf("Digite o tatal de dias que o encanador trabalhou:\n");
scanf("%d", &dias);

printf("\nO valor bruto e de %.2f reais", diaria * dias);
printf("\nO imposto de renda sera de %.2f reais", (diaria * dias) * imposto);
printf("\nO encanador vai ganhar %.2f reais\n", (diaria * dias) * (1 - imposto));

}
