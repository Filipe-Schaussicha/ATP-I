#include<stdio.h>

int main(){

    char palavra[100];
    int j = 0, a =0, e=0, i=0, o=0, u=0;
    fgets(palavra, 100, stdin);

    while(palavra[j] != '\0'){

        switch(palavra[j]){
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        }

        j++;
    }

    printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d", a,e,i,o,u);
}
