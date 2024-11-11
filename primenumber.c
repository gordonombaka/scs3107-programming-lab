#include <stdio.h>
#include <math.h>

// Helper function to check if the number is prime recursively
int isPrimeHelper(int num, int divisor) {
    if (divisor > sqrt(num)) {
        return 1; // Base case: No divisors found, the number is prime
    }
    if (num % divisor == 0) {
        return 0; // Divisor found, not a prime
    }
    return isPrimeHelper(num, divisor + 1); // Recur with the next divisor
}

// Function to check if the number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    return isPrimeHelper(num, 2); // Start checking divisors from 2
}

int main() {
    int number;
    
    // Ask the user for a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // Check if the number is prime using the isPrime function
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
