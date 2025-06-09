#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){

    char frase[100], c; int pos, flag = 0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    frase[strlen(frase) - 1] = '\0';



    for(int i = 0; i < strlen(frase); i++){

        if(frase[i] >= 'a' && frase[i] <= 'z'){
            frase[i] -= 32;
        }

        flag = 0;
        c = frase[i];

        for(int j = i+1; j < strlen(frase); j++){
            if(frase[j] < c){
                frase[i] = frase[j];
                pos = j;
                flag = 1;
            }
        }

        if(flag == 1){
            frase[pos] = c;
        }
    }

    printf("%s\n", frase);

    return 0;
}
