#include <stdio.h>

int main(){

    /*2) Preencher um vetor com a soma acumulada de
1 a N. Em seguida, exibir os elementos do vetor.*/

    int num, sum = 0;

    printf("Digite um numero maior que um: ");
    scanf("%d", &num);
    int vetor[num];

    for(int i = 0; i < num; i++){

        scanf("%d", &vetor[i]);

    }

    for(int i = 0; i < num; i++){

        printf("\nNumero numero %d = %d", i, vetor[i]);

        sum += vetor[i];
    }

    printf("\nSoma deles é de %d", sum);
}
