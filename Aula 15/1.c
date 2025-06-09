#include<stdio.h>
#include<string.h>

int main(){

    char nome[100], telefone[20], endereco[200], saida[400];
    int idade;

    printf("Digite seu nome: \n");
    gets(nome);
    printf("%s\n", nome);
    printf("Digite seu telefone: \n");
    gets(telefone);
    printf("%s\n", telefone);
    printf("Digite seu endereco: \n");
    gets(endereco);
    printf("%s\n", endereco);
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("%d\n", idade);

    sprintf(saida, "Nome: %s. Telefone: %s. Endereco: %s. Idade: %d.\n", nome, telefone, endereco, idade);
    printf("%s", saida);
}
