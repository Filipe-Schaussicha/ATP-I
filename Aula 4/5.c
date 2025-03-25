#include <stdio.h>

int main() {

float real, dolar;
printf("Digite o valor em reais para ser convertido em Dolar:");
scanf("%f", &real);
dolar = real / 5.71;
printf("Isso equivale a %.2f", dolar, " Dolares");
return 0;
}
