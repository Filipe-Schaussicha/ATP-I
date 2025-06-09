#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int num;
    bool primo = true;

    scanf("%d", &num);

    if (num < 2) {
        primo = false;
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        printf("É primo\n");
    } else {
        printf("Não é primo\n");
    }

    return 0;
}

