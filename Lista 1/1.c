#include<stdio.h>

int main(){

    char senha[6];
    inicio:
    scanf("%s", &senha);
    //scanf("%d", &senha);
    printf("%s\n", senha);
    if(strcmp(senha, "1234")==0){
        printf("Senha correta\n");
    }else{
        printf("Senha errada, tente novamente:\n");
        goto inicio;
    }

}
