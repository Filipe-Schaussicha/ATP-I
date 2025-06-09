#include<string.h>
#include<stdio.h>

int main(){

    char palavra[100];
    int tamanho = 0;

    gets(palavra);

    tamanho = strlen(palavra);

    printf("O tamanho e de: %d\n", tamanho);


}
