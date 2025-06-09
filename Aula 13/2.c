#include <stdio.h>

int main(){

    /*2) Faça um programa para ler N números e armazena-los em um vetor. O valor
de N é fornecido pelo usuário. Em seguida, o seu programa deverá exibir os
números lidos.*/


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
