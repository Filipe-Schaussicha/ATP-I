#include <stdio.h>
#include <math.h>

int main(){

    float num;

    inicio:

    scanf("%f", &num);

    if(num > 0){

        printf("O quadrado é: %f\n", pow(num, 2));
        printf("O cubo é: %f\n", pow(num, 3));
        printf("A raiz é: %f\n", sqrt(num));

        goto inicio;
    }

    return 0;
}
