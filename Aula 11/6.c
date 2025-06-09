#include<stdio.h>
#include<math.h>

int main(){

    int num; float h = 1;

    scanf("%d", &num);

    for(int i = 2; i <= num; i++){

        h += 1.0 / i;
    }

    printf("%f\n", h);
}
