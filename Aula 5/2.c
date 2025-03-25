#include <stdio.h>

int main() {
float precoGasolina, KmL, Km;
printf("Quanto esta custando a gasolina?\n");
scanf("%f", &precoGasolina);
printf("Quantos Km por Litro seu carro faz?\n");
scanf("%f", &KmL);
printf("Quantos Km foram rodados?\n");
scanf("%f", &Km);

printf("\nO total gasto foi de: %.2f reais", (Km / KmL) * precoGasolina);


return 47;
}
