#include <stdio.h>

/**
 * @brief Calculate the factorial of a positive integer.
 *
 * This program calculates the factorial of a positive integer provided by the user.
 * Factorial is defined as the product of all positive integers from 1 to n.
 *
 * @param num The positive integer for which the factorial is to be calculated.
 * @return 0 on success.
 */
int main() {
    int num;
    long long factorial = 1;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the entered number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Display the result
        printf("The factorial of %d is %lld\n", num, factorial);
    }

    return 0;
}

