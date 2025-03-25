#include <stdio.h>

int main() {

    float seg;
    printf("Conversor de segundos: Digite um valor em segundos que converteremos em minutos e horas:\n");
    scanf("%f", &seg);

    printf("\nVoce digitou %.0f segundos", seg);
    printf("\nIsso e %.2f minutos", seg / 60);
    printf("\nIsso e %.2f horas", seg / 3600);

return 0;
}
