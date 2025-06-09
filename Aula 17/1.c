#include<stdio.h>

int fat(int n, int *pResult){

    for(int i = 1; i <= n; i++){
        *pResult *= i;
    }
}

int main(){

    int result = 1, num;
    scanf("%d", &num);
    fat(num, &result);
    printf("O resultado e %d\n", result);
}
