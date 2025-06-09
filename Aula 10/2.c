#include <stdio.h>

int main(){

    int opt, num, i = 0;
    float soma = 0;

do{
    printf("Selecione uma das opcoes:\n\
           1 - Adicionar um número\n\
           2 - Sair\n");
    scanf("%d", &opt);

    if(opt == 1){
        printf("Digite um numero: \n");
        scanf("%d", &num);
        i++;
        soma += num;
    }


}while(opt == 1);

    printf("Foram digitados %d numeros, a soma deles e %.2f e a media e %.2f.", i, soma, (soma / i));

}
