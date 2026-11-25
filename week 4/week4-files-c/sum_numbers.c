#include <stdio.h>

int main() {

    // Declare variables
    int n;
    int sum = 0;

    // Ask the user to enter a number
    printf("Enter a positive number (N): ");

    // Read the number
    scanf("%d", &n);

    // Calculate the sum using a for loop
    for (int i = 1; i <= n; i++) {

        sum += i;

    }

    // Display the result
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}