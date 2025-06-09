#include<stdio.h>

int main(){

    int tamanho, sub , lim;
    printf("Digite o tamanho do Vetor: ");
    scanf("%d", &tamanho);
    int vec[tamanho];
    printf("\nDigite valor a substituir: ");
    scanf("%d", &sub);
    printf("\nDigite valor limite: ");
    scanf("%d", &lim);

    for(int i = 0; i < tamanho; i++){
        printf("digite o valor %d: ", i+1);
        scanf("%d", &vec[i]);

        if(vec[i] > lim){
            vec[i] = sub;
        }
    }
    for(int i = 0; i < tamanho; i++){
        printf("\n%d", vec[i]);
    }
}
