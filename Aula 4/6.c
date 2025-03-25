#include <stdio.h>

int main(){

    int num, soma, sub;

printf("Digite um numero inteiro:\n");
scanf("%d", &num);
soma = num + 1;
sub = num - 1;

printf("\nO sucessor do numero e: %d", soma);
printf("\nO antecessor do numero e: %d", sub);
return 0;
}
