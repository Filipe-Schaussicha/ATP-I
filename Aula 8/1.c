#include <stdio.h>

int main() {

    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("Voce e de Maior");
    }else {
        printf("Voce e de Menor");
    }

return 0;
}
