#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf(","); // Print comma except after the last number in the row
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
