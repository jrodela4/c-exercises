#include <stdio.h>

int main(void) {
    int score = 0;

    printf("Enter a score between 0 and 100: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("Score %d: A - Excellent!\n", score);
    } else if (score >= 80) {
        printf("Score %d: B - Good work.\n", score);
    } else if (score >= 70) {
        printf("Score %d: C - Keep practicing.\n", score);
    } else if (score >= 60) {
        printf("Score %d: D - Needs improvement.\n", score);
    } else {
        printf("Score %d: F - Needs more study.\n", score);
    }

    return 0;
}