#include <stdio.h>

int main(){

    float num1, num2;
    char operacao;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1 );
    fflush(stdin);
    printf("Digite o simbulo da operacao (+, -, * ou /): \n");
    scanf("%c", &operacao );
    printf("Digite o Segundo numero: \n");
    scanf("%f", &num2 );

    switch(operacao){

    case '+':
        printf("\n %.2f \n", num1 + num2);
        break;

    case '-':
        printf("\n %.2f \n", num1 - num2);
        break;

    case '/':
        printf("\n %.2f \n", num1 / num2);
        break;

    case '*':
        printf("\n %.2f \n", num1 * num2);
        break;

    default:
        printf("\nOperador nao valido.\n");
    }
}
