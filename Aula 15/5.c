#include<stdio.h>
#include<string.h>

int main(){

    char n[100], m[100];

    printf("Digite uma string: ");
    gets(n);
    printf("Digite outra string: ");
    gets(m);

    strcat(n, m);

    printf("%s\n", n);

}
