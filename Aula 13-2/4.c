#include<stdio.h>

int main(){

    int tam, v1, v2;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vec[tam];
    printf("Digite o valor 1: ");
    scanf("%d", &v1);
    printf("Digite o valor 2: ");
    scanf("%d", &v2);

    for(int i = 0; i < tam; i++){
        printf("\nDigite o numero %d: ", i+1);
        scanf("%d", &vec[i]);

        if(vec[i] == v1){
            vec[i] = v2;
        }
    }

    for(int i = 0; i < tam; i++){
        printf("%d", vec[i]);
    }

}
