#include <stdio.h>

int main() {
    int numero;
    printf("Digite um n�mero inteiro:");
    scanf("%d",&numero);
    if (numero % 3 == 0 && numero % 5 == 0){
        printf("O n�mero � divis�vel por 3 e 5.");
    } else {
        printf("O n�mero n�o � divis�vel por 3 e 5.");
    }
    return 0;
}
