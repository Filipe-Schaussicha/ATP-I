#include <stdio.h>

int main() {

    int num, i;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++) {
        printf("\n%d", num);
        printf(" x %d", i);
        printf(" = %d", (num * i));
    }
return 0;
}
