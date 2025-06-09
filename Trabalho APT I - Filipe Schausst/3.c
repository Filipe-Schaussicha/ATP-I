#include<stdio.h>
#include<string.h>

// Feito por Filipe Schausst de Medeiros

void subS(char str[], char strout[], int ini, int fim){
    
    int j = 0;

    for(int i = ini; i <= fim; i++){
        strout[j] = str[i];
        strout[j+1] = '\0';
        j++;
    }
}

int main(){
    
    int inicio, fim; char str[100], strout[100];

    printf("Digite uma palavra: ");
    fgets(str, 100, stdin);
    printf("Digite a posição inicial: ");
    scanf("%d", &inicio);
    printf("Digite a posição final: ");
    scanf("%d", &fim);

    subS(str, strout, inicio, fim);

    printf("Substring: %s\n", strout);

    return 0;
}
