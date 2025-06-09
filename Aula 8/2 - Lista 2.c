#include <stdio.h>

int main() {

    float num1, num2;
    printf("Digite dois numeros: \n");
    scanf("%f%f", &num1, &num2);

    if(num1 == num2){
        printf("Os numeros sao iguais!\n");
    }else{
        if(num1 > num2){
            printf("\no maior numero e: %.2f", num1);
            printf("\nA diferenca entre os dois numeros e de: %.2f\n", num1 - num2);
        }else{
            printf("\no maior numero e: %.2f", num2);
            printf("\nA diferenca entre os dois numeros e de: %.2f\n", num2 - num1);
        }
    }

}
