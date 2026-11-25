#include <stdio.h>

int main() {

    // Display a program heading
    printf("Number filter: Skip multiples of 3, stop at 15\n");

    // Start a loop from 1 to 20
    for (int i = 1; i <= 20; i++) {

        // Check if the number is 15
        if (i == 15) {

            printf("Breaking at %d!\n", i);

            // Stop the loop completely
            break;
        }

        // Skip multiples of 3
        if (i % 3 == 0) {

            continue;
        }

        // Display numbers that are not multiples of 3
        printf("%d ", i);

    }

    printf("\n");

    return 0;
}