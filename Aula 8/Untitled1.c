#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro:");
    scanf("%d",&numero);
    if (numero % 3 == 0 && numero % 5 == 0){
        printf("O número é divisível por 3 e 5.");
    } else {
        printf("O número não é divisível por 3 e 5.");
    }
    return 0;
}
