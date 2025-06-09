#include<stdio.h>
#include<string.h>

int contagem(int *pC, int *pV, int *pN, char var[]){

    for(int i = 0; var[i] != '\n'; i++){
            //printf("a\n");
        if(var[i]=='a' || var[i]=='A' || var[i]=='e' || var[i]=='E' || var[i]=='i' || var[i]=='I' || var[i]=='o' || var[i]=='O' || var[i]=='u' || var[i]=='U'){
            (*pV)++;
        }else if((var[i] >= 'a' && var[i] <='z') || (var[i] >= 'A' && var[i] <= 'Z')){
            (*pC)++;
        }

        if(var[i] >= '0' && var[i] <= '9'){
            (*pN)++;
        }
    }
}

int main(){

    int c =0, v=0, n=0; char entrada[50];

    fgets(entrada, 50, stdin);

    contagem(&c, &v, &n, entrada);

    printf("Consoantes: %d\n", c);
    printf("Vogal: %d\n", v);
    printf("Numero: %d\n", n);
}
