#include <stdio.h>

int main(){

    float prestacao, salario;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);
    printf("\nDigite o valor da prestacao: ");
    scanf("%f", &prestacao);

    if(prestacao > salario * 0.2){
        printf("Emprestimo nao consedido\n");
    }else{
        printf("Emprestimo consedido\n");
    }

}
