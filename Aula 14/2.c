#include<stdio.h>

int main(){

    char nome[50],endereco[100],telefone[20];
    int idade;

    printf("Escreva seu nome: ");
    fgets(nome, 50, stdin);
    printf("Escreva sua idade: ");
    scanf("%d", &idade);
    getchar();
    printf("Escreva seu endereco: ");
    fgets(endereco, 50, stdin);
    printf("Escreva seu telefone: ");
    fgets(telefone, 50, stdin);
    printf("\n%s %d %s %s\n", nome, idade, endereco, telefone);

}
