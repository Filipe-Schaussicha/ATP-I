#include <stdio.h>

int main(){

    /*3) Preencher um vetor com N elementos da
sequência de Fibonacci. Em seguida, exibir os
elementos do vetor. Considere N>2.*/

    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    int vetor[num];
    for(int i = 0; i < num; i++){

        if(i == 0 || i == 1){
            vetor[i] = 1;
        }else{
            vetor[i] = vetor[i - 1] + vetor[i - 2];
        }

    }

    for(int i; i < num; i++){

        printf("\n%d", vetor[i]);

    }

}
