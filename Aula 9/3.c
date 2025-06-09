#include <stdio.h>

int main(){

    int i = 1, numM = 0, numE;
    while(i<=5){

        printf("Digite o %dº numero: ", i);
        scanf("%d", &numE);
        i++;
        if (numM < numE){
            numM = numE;
        }
    }
    printf("O maior numero e %d\n", numM);

}
