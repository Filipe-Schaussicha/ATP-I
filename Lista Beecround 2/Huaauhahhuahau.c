#include<stdio.h>
#include<string.h>

int main(){

    char rs[50], saida[50], sr[50]; int k=0, i=0;
    scanf("%s", rs);

    while(rs[i] != '\0'){
        if(rs[i] == 'a' || rs[i] == 'e' || rs[i] == 'i' || rs[i] == 'o' || rs[i] == 'u'){
            saida[k] = rs[i];
            saida[k+1] = '\0';
            k++;
        }
        i++;
    }
    i = 0;
    while(saida[i] != '\0'){
        sr[i] = saida[strlen(saida) -1 -i];
        sr[i+1] = '\0';
        i++;
    }
    
    if(strcmp(saida, sr) == 0){
        printf("S\n");
    }else{
        printf("N\n");
    }

    //printf("%s\n%s\n", saida, sr);

    return 0;
}

/*#include<stdio.h>
#include<string.h>

int main(){

    char rs[50], saida[50], sr[50]; int k=0;
    scanf("%s", &rs);

    for(int i =0; i < strlen(rs); i++){
        if(rs[i] == 'a' || rs[i] == 'e' || rs[i] == 'i' || rs[i] == 'o' || rs[i] == 'u'){
            saida[k] = rs[i];
            saida[k+1] = '\0';
            k++;
        }
    }
    for(int i = 0; i < strlen(saida); i++){
        sr[i] = saida[strlen(saida) -1 -i];
        sr[i+1] = '\0';
    }
    
    if(strcmp(saida, sr) == 0){
        printf("S\n");
    }else{
        printf("N\n");
    }

    //printf("%s\n%s\n", saida, sr);

    return 0;
}
*/
