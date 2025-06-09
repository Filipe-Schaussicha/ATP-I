#include<stdio.h>

int main(){

    char num[100]; int i = 0;
    gets(num);

    while(num[i] != '\0'){

        switch(num[i]){
        case '0':
            num[i] = '1';
            break;
        case '1':
            num[i] = '0';
            break;
        default:
            printf("Digite apenas 0s e 1s");
            break;
        }
        i++;
    }
    printf("%s", num);
}
