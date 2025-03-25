#include <stdio.h>

int main() {
    int numOriginal, numInvertido, dig1, dig2, dig3;

    printf("Digite um numero inteiro de 3 digitos: \n");
    scanf("%d", &numOriginal);

    dig1 = numOriginal % 10;
    dig2 = ((numOriginal % 100) - dig1);
    dig3 = ((numOriginal % 1000) - dig2 - dig1) /100;

//    printf("\n%d\n%d\n%d", dig1, dig2, dig3);

    printf("\n%d\n", (dig1 * 100) + (dig2) + dig3);

return 0;
}
