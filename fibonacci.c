#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: F(0) = 0
    } else if (n == 1) {
        return 1; // Base case: F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

int main() {
    int n;

    // User Input
    printf("Enter the value of n (n >= 2): ");
    scanf("%d", &n);

    // Validate input
    if (n < 2) {
        printf("Please enter a value of n that is 2 or greater.\n");
        return 1; // Exit the program with an error code
    }

    // Print Fibonacci sequence
    printf("Fibonacci sequence for n = %d: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d", fibonacci(i));
        if (i < n - 1) {
            printf(", "); // Print a comma for all but the last number
        }
    }
    printf("\n");

    return 0;
}
