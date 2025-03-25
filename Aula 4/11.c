#include <stdio.h>

int main(){

float nota1, nota2, peso1, peso2, result;

printf("Digite as duas notas: \n");
scanf("%f", &nota1);
scanf("%f", &nota2);
printf("\nAgora digite os dois pesos (Em decimal): \n");
scanf("%f", &peso1);
scanf("%f", &peso2);

nota1 = nota1 * peso1;
nota2 = nota2 * peso2;
result = nota1 + nota2;

printf("O resultado e: %.2f", result);

return 0;
}
