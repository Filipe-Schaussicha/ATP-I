#include <stdio.h>

int main(){

    int tamanho, par = 0, impar = 0;
    printf("Digite o tamanho do Vetor: ");
    scanf("%d", &tamanho);
    int vec[tamanho];
    for(int i = 0; i < tamanho; i++){
        printf("\nDigite o %d numero: ", i +1);
        scanf("%d", &vec[i]);

        if(vec[i] % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }

    printf("\nNumeros pares: %d\nNumeros impares: %d\n", par, impar);


}
