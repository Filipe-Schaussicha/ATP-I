#include <stdio.h>

int main() {

    int num, result;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    result = num % 2;
    printf("%d\n", result);

    if (result == 0){
        printf("O numero e par\n");
    }else{
        printf("O numero e impar\n");
    }

}
