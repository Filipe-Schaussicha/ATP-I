#include<stdio.h>
#include<string.h>

// Escrito por Filipe Schausst de Medeiros

int main(){
    
    inicio:
    int opt, cod; char entrada[100];
    
    printf("Digite uma opção:\n0 - Para codificar alguma mensagem\n1 - Para descodificar:\n");
    scanf("%d", &opt);

    printf("Digite o valor da codificação(entre 1 e 10):\n");
    scanf("%d", &cod);

    if((opt != 0 && opt != 1) || cod < 1 || cod > 10){
        printf("Opções não válidas, tente novamente: \n");
        goto inicio;
    }

    getchar();
    printf("Digite sua frase:\n");
    fgets(entrada, 100, stdin);

    for(int i = 0; i < strlen(entrada); i++){
       if(opt == 0){
             entrada[i] += cod;
        }else{
            entrada[i] -= cod;
        }
    }

    printf("%s\n", entrada);

    return 0;
}
