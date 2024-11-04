// Write a recursive function that, given a positive integer n, returns the sum of the squares of all 
//integers from 0 to n. Ensure the function includes a base case for termination and accounts for 
//edge cases where n is 0 or 1.

#include <stdio.h>
#include <stdlib.h>

int sumOfSquares(int n) {
    if (n == 0) {
        return 0;
    }

    else if (n == 1) {
        return 1;
    }

    return (n * n) + sumOfSquares(n - 1);
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Computation

    int output = sumOfSquares(n);

    printf("The sum of all positive integers is %d", output);

    return 0;
}