#include<stdio.h>
#include<string.h>

int main(){

    char string1[100], string2[100];

    printf("Digite uma string: ");
    gets(string1);
    printf("Digite outra string: ");
    gets(string2);

    if(strcmp(string1, string2)==0){
        printf("Elas são iguais\n");
    }else{
        printf("Elas são diferentes\n");
    }
}
