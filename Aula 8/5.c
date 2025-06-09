#include <stdio.h>

int main(){

    float num1, num2;

    printf("Digite dois numeros, que serao postos em ordem crescente\n");
    scanf("%f%f", &num1, &num2);

    if(num1 == num2){
        printf("\nEles sao iguais");
    }else{
        if(num1 < num2){
            printf("%.2f\n%.2f", num1, num2);
        }else{
           printf("%.2f\n%.2f", num2, num1);
        }
    }
}
