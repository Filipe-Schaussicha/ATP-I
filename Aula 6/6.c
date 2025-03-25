#include <stdio.h>

int main(){

    float Salario;
    printf("Digite seu salario: \n");
    scanf("%f", &Salario);

    if(Salario < 1000){
        printf("Com o reajuste o salario sera de: %.2f", Salario + (Salario * ((float)20/100)));
    }else{
        if(Salario <= 2000){
            printf("Com o reajuste o salario sera de: %.2f", Salario + (Salario * 0.1));
        }else{
            printf("Seu salario nao sofrera reajustes");
        }
    }

}
