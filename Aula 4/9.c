#include <stdio.h>

int main(){

float var, result;

printf("Digite o valor do salario original: \n");
scanf("%f", &var);

result = var + (var * 0.25);

printf("Sal�rio com 25 por cento de aumento: %.2f", result);

return 0;
}
