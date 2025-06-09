#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    char frase[100]; int sum = 0;

    printf("Coloque o arquivo .csv: ");
    fgets(frase, 100, stdin);

    if(frase[0] >= '0' && frase[0] <= '9'){
        sum = atoi(frase);
    }

    for(int i =0; i < strlen(frase); i++){

        if((frase[i] < '0' || frase[i] > '9') && (frase[i+1] >= '0' && frase[i+1] <= '9')){
            sum += atoi(&frase[i+1]);
        }
    }

    printf("A soma é de: %d", sum);

}
