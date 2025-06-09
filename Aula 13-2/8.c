#include<stdio.h>

int main(){

    int tamanho, total=0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int var[tamanho];

    for(int i = 0; i<tamanho; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &var[i]);

        total+= var[i];
    }
    float media = total / tamanho;
    printf("A media e de: %.2f\n", media);
    printf("O novo vetor e: ");
    for(int i = 0; i<tamanho; i++){
        printf("%.0f, ", (float)var[i] - media);
    }

}
