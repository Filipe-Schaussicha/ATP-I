#include<stdio.h>
#include<string.h>

//Feito por Filipe Schausst de Medeiros

int main(){
    
    char entrada[100];

    printf("Digite uma Palavra: ");

    fgets(entrada, 100, stdin); //lê a palavra
    
    int tamanho = strlen(entrada);
    char letra[tamanho]; int qnt[tamanho], flag,k=0; 
    //Cria as outras variáveis baseado no tamanho da palavra

    for(int i = 0; i < tamanho; i++){
        flag = 0;
        letra[i] = '\0'; // Limpa as variáveis

        for(int j =0; j < tamanho; j++){ //Verifica se a letra já foi salva
            if(entrada[i] == letra[j]){
                // Se foi salvo, incrementa um valor a variável qnt correspondente
                flag = 1;
                qnt[j]++;
            }
        }

        if(flag == 0){
            letra[k] = entrada[i]; // Se não, adiciona ao arrey letra
            letra[k+1] = '\0';
            qnt[k] = 1;
            k++;
        }
    }

    for(int i =0; i < strlen(letra)-1; i++){
        printf("%c: %d ocorrencia(s)\n", letra[i], qnt[i]);
    }

    return 0;
}
