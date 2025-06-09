#include <stdio.h>

int main(){

    float num, soma = 0;

    for(int i = 1; i <= 5; i++){

        printf("Digite o %dº valor: ", i);
        scanf("%f", &num);

        soma += num;

    }

    printf("\nO Resultado e %.2f", soma / 5);

}
