#include<stdio.h>
#include<string.h>

int main(){

    char n[100];

    gets(n);

    int tamanho = strlen(n);

    for(int i = 0; i < tamanho; i++){

        if(n[i] >= 97 && n[i] <= 122){
            n[i] -= 32;
        }
    }

    printf("%s\n", n);

}
