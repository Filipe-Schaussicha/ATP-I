#include <stdio.h>

int main() {

float var1, var2, var3, var4, result;
printf("Digite as quatro notas para que a media seja feita:\n");
scanf("%f", &var1);
scanf("%f", &var2);
scanf("%f", &var3);
scanf("%f", &var4);

result = (var1 + var2 + var3 + var4) / 4;
printf("\nO resultado e: %.2f", result);

return 0;
