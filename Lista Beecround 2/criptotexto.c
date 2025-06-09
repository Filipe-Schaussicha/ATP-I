#include<stdio.h>
#include<string.h>

int main(){

    int n, k, j; char entrada[101], saida[101];
    
    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++){
        
        k=0;
        
        fgets(entrada, 101, stdin);
        j = strlen(entrada) - 1;
        

        while(j >= 0){
        
        	if(entrada[j] >= 'a' && entrada[j] <= 'z'){
                
                	saida[k] = entrada[j];
                	k++;
            	}
            	j--;
        }
        saida[k] = '\0';
        printf("%s\n", saida);

    }

    return 0;
}
