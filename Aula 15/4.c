#include<stdio.h>
#include<string.h>

int main(){

    char n[100], m[100];

    printf("Digite uma string: ");
    gets(n);

    strcpy(m, n);

    printf("String copiada: %s\n", m);

}
