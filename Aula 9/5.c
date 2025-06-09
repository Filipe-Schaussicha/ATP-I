#include <stdio.h>

int main(){

    int i = 1, numMe = 0, numMa = 0, numE, soma = 0, media = 0;
    while(i<=5){

        printf("Digite o %dº numero: ", i);
        scanf("%d", &numE);
        i++;
        if (numMa < numE){
            numMa = numE;
        }
        if (numMe > numE){
            numMe = numE;
        }

        soma = soma + numE;
    }

    media = soma / (i - 1);

    printf("O maior numero e %d\n", numMa);
    printf("O menor numero e %d\n", numMe);
    printf("A soma e %d\n", soma);
    printf("A media e %d\n", media);

}

