#include<stdio.h>

int main(){

    int tamanho, flag = 0;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);
    int vec1[tamanho], vec2[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d valor do vetor 1: ", i+1);
        scanf("%d", &vec1[i]);
    }
    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d valor do vetor 2: ", i+1);
        scanf("%d", &vec2[i]);

        if(vec1[i] != vec2[i]){
            flag = 1;
        }
    }
    if(flag == 0){
        printf("Eles são iguais\n");
    }else{
        printf("Eles são diferentes");
    }
}
