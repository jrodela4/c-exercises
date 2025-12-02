#include <stdio.h>

int main(void) {
    int temperature = 0;

    printf("Enter today's temperature (F): ");
    scanf("%d", &temperature);

    if (temperature <= 32) {
        printf("Freezing day, wear a coat!\n");
    } else if (temperature <= 75) {
        printf("Nice and mild outside.\n");
    } else {
        printf("It's hot, stay hydrated.\n");
    }

    return 0;
}