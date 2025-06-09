#include <stdio.h>

int main(){

    int vec;
    printf("Digite o tamanho do padrão binário: ");
    scanf("%d", &vec);
    printf("Digite o numero binario, um digito por vez: ");
    int num[vec];

    for(int i = 0; i < vec; i++){
        printf("\nnum %d: ", i + 1);
        scanf("%d", &num[i]);
    }
            printf("\n");
    for(int i = 0; i < vec; i++){
        if(num[i] == 0){
            num[i] = 1;
        }

        printf("%d", num[i]);
    }

}
