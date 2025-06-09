#include<stdio.h>

int main(){

    int tamanho;
    printf("Digite o tamanho do numero: ");
    scanf("%d", &tamanho);
    int vec[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("\n Digite o %d numero: ", i+1);
        scanf("%d", &vec[i]);
    }
    for(int i = tamanho - 1; i >= 0; i--){
        printf("%d", vec[i]);
    }


}
