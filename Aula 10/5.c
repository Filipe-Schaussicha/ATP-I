#include <stdio.h>

int main(){

    int num, result = 1;

    printf("Calculadora de fatorial\n\
           Digite um numero: ");
    scanf("%d", &num);

    if(num == 0 || num == 1){
        result = 1;
    }else{
        for(int i = 1; i <= num; i++){
            result *= i;
        }
    }
    printf("O resultado e %d\n", result);

}
