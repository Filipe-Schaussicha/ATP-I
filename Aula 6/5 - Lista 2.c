#include <stdio.h>

int main(){

    float nota1, nota2;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if(nota1 <= 0 || nota1 >= 10){
        printf("\nNota 1 contem um valor invalido");
    }else{
        if(nota2 <= 0 || nota2 >= 10){
        printf("\nNota 2 contem um valor invalido");
        }else{
            printf("A media e de: %.2f \n", (nota1 + nota2)/2);
        }
    }
}
