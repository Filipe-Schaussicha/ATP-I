#include <stdio.h>

int main() {
float pessoa1, pessoa2, pessoa3, pessoa1C, pessoa2C, pessoa3C, premio, contrib;

printf("Quanto a primeira pessoa apostou?\n");
scanf("%f", &pessoa1);
printf("Quanto a segunda pessoa apostou?\n");
scanf("%f", &pessoa2);
printf("Quanto a terceira pessoa apostou?\n");
scanf("%f", &pessoa3);
printf("Quanto e o premio total?\n");
scanf("%f", &premio);

contrib = pessoa1 + pessoa2 + pessoa3;

pessoa1C = pessoa1 / contrib;
pessoa2C = pessoa2 / contrib;
pessoa3C = pessoa3 / contrib;

printf("\nA primeira pessoa vai levar %.2f reais", premio * pessoa1C);
printf("\nA segunda pessoa vai levar %.2f reais", premio * pessoa2C);
printf("\nA terceira pessoa vai levar %.2f reais\n", premio * pessoa3C);
}
