#include <stdio.h>

int main() {

int var1, var2, var3, result;
printf("Digite tres numeros para serem somados:\n");
scanf("%d", &var1);
scanf("%d", &var2);
scanf("%d", &var3);

result = var1 + var2 + var3;
printf("\nO resultado é: %d", result);

return 0;
