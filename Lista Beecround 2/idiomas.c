#include<stdio.h>
#include<string.h>
int main(){

    int n,k, flag; char entrada[25], buffer[25], saida[200];

    for(int i = 0; i < strlen(saida); i++){
        saida[i] = '\0';
    }

    scanf("%d", &n);

    for(int i =0; i<n; i++){
        scanf("%d", &k);
        getchar();
        flag=0;
        for(int j = 0; j<k; j++){
            fgets(entrada,25,stdin);
            if(j==0){
                strcpy(buffer, entrada);
            }
            if(strcmp(buffer, entrada) != 0){
                flag = 1;
            }
        }
        if(flag == 1){
            strcat(saida, "ingles\n");
            //printf("ingles\n");
        }else{
            strcat(saida, entrada);
            //strcat(saida, "\n");
            //("%s", entrada);
        }
    }

    printf("%s", saida);
    return 0;

}
