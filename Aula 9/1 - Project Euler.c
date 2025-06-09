#include <stdio.h>

int main(){

    int soma = 0;

    for(int i = 1; i < 1000; i++){

        if(i % 3 == 0 || i % 5 == 0){
            soma = soma + i;
            printf("numero atual: %d\n", i);
            printf("A Soma atual e de: %d\n", soma);
        }

    }

}
