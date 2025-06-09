#include <stdio.h>
#include <math.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 3; i <= n; i++){
        if(i % 3 == 0 || i % 5 == 0){
            printf("%d\n", i);
        }
    }
}
