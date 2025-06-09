#include <stdio.h>

int main(){

    float valor;

    printf("Digite o valor de um produto:\n");
    scanf("%f", &valor);


    if(valor < 100){
        printf("\nBARATO");
    }else{
        if(valor < 500){
            printf("\nNORMAL");
        }else{
            printf("\nCARO");
        }
    }

}
