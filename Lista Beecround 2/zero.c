#include<stdio.h>
#include<string.h>
int main(){

    int n, m, j=0; char result[100], saida[100];

    for(int i = 0; i < 100; i++){
        saida[i] = '\0';
        result[i] = '\0';
    }

    scanf("%d",&n);
    scanf("%d",&m);

    if(n== 0 && m ==0){
        return 0;
    }

    sprintf(result, "%d", n+m);
    //printf("%s\n", result);

    for(int i = 0; i < strlen(result); i++){
        if(result[i] != '0'){
            saida[j] = result[i];
            j++;
        }
    }

    printf("%s\n", saida);
    return 0;
}
