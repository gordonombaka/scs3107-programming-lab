#include <stdio.h>

// Function to calculate factorial recursively
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! = 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int number;

    // User Input
    printf("Please enter a non-negative integer: ");
    scanf("%d", &number);

    // Validate input
    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        unsigned long long result = factorial(number);
        // Output the result
        printf("The factorial of %d is %llu.\n", number, result);
    }

    return 0;
}
