#include <stdio.h>

int main() {

float compra, Vcupom;
int Tcupom;
Vcupom = 20;

printf("Valor da compra:\n");
scanf("%f", &compra);

Tcupom = compra / Vcupom;

printf("Voce tem direito a %d cupons", Tcupom);

return 0;
}
