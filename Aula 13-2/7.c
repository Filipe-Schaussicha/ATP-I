#include<stdio.h>

int main(){

    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vec1[tamanho];
    int vec2[tamanho];
    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vec1[i]);

        vec2[i] = vec1[i];

    }
    printf("Cópia do Vetor original: ");
    for(int i = 0; i<tamanho; i++){
        printf("%d", vec2[i]);
    }

}
