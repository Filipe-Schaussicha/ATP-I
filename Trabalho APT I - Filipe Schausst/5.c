#include<stdio.h>
#include<string.h>

// Feito por Filipe Schausst de Medeiros

int main(){
    
    char in[100], busca[100]; int flag = 0, qnt = 0;

    printf("Digite uma Palavra: ");
    fgets(in, 100, stdin);
    printf("Palavra de busca: ");
    fgets(busca, 100, stdin);

    
    for(int i=0; i < strlen(in) ; i++){

        if(in[i] == busca[0]){
            flag = 1;

            for(int j = 1; j < strlen(busca)-1; j++){

                if(in[i+j] != busca[j]){
                    flag = 0;
                }
            }

            if(flag == 1){
                qnt++;
            }
        }
    }

    printf("Palavra de Busca ocorre %d vez(es)\n",qnt);
    return 0;
}
