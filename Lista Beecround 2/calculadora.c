#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int n, sum; char in[15];
    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++){
        fgets(in, 15, stdin);
        for(int j =0; j < 14; j++){
            if(j == 0){
                sum = atoi(in);
            }
            if((in[j] < '0' || in[j] > '9') && in[j+1]>='0' && in[j+1]<='9'){
                sum += atoi(&in[j+1]);
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
