#include <stdio.h>

// Recursive function to calculate GCD
int gcd(int a, int b) {
    // Base case: if b is 0, return a (GCD is a)
    if (b == 0) {
        return a;
    }
    // Recursive case: call gcd with b and a % b
    return gcd(b, a % b);
}

int main() {
    int a, b;

    // Prompt user to enter two positive integers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Check if the inputs are positive
    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;  
    }

    // Call gcd function and print the result
    int result = gcd(a, b);
    printf("The GCD of %d and %d is %d.\n", a, b, result);

    return 0;
}
