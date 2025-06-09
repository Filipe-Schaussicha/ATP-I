#include<stdio.h>
#include<string.h>

int main(){

    char n[100], menor[100], maior[100]; int qnt;

    printf("quantas palavras você vai digitar?\n");
    scanf("%d", &qnt);
    getchar();
    for(int i = 0; i < qnt; i++){
        gets(n);

        if(i == 0){
            strcpy(menor, n);
            strcpy(maior, n);
        }else if(strcmp(n, menor)== -1){
                strcpy(menor, n);
            }else if(strcmp(n, maior)==1){
                strcpy(maior, n);
        }
    }

    printf("Em ordem alfabética, a primeira palavra é: %s\nA ultima palavra é: %s\n", menor, maior);


}
