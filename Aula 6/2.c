#include <stdio.h>

int main() {

    float num;
    printf("Digite um numero: \n");
    scanf("%f", &num);

    if(num >= 0){
        printf("Esse numero e possitivo");
    }else{
        printf("Esse numero e negativo");
    }

}
