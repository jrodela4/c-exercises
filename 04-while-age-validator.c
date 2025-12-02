#include <stdio.h>

int main(void) {
    int age = -1; // impossible value so the loop runs at least once

    while (age < 0 || age > 120) {
        printf("Enter age: ");
        scanf("%d", &age);

        if (age < 0 || age > 120) {
            printf("Please enter an age between 0 and 120.\n");
        }
    }

    printf("Thanks, you entered %d\n", age);

    return 0;
}