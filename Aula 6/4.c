#include <stdio.h>

int main(){

    float num1, num2;
    printf("Digite dois numeros: \n");
    scanf("%f%f", &num1, &num2);

    if(num1 != num2){
        printf("Sao numeros diferentes!");
    }else{
        printf("Sao numeros iguais");
    }

}
