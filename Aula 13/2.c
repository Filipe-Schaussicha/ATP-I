#include <stdio.h>

int main(){

    /*2) Fa�a um programa para ler N n�meros e armazena-los em um vetor. O valor
de N � fornecido pelo usu�rio. Em seguida, o seu programa dever� exibir os
n�meros lidos.*/


    int num;

    printf("Digite quantos numeros voce quer digitar: ");
    scanf("%d", &num);

    int vector[num];

    printf("\nAgora digite os valores;\n");

    for(int i = 0; i < num; i++){

        scanf("%d", &vector[i]);

    }

    for(int i = 0; i < num; i++){

        printf("\n%d", vector[i]);

    }


    return 0;
}
