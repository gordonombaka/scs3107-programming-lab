//Write a program that prompts the user to enter a positive integer n and then uses a loop to 
//calculate and print the following:
//1. The sum of all integers from 1 to n.
//2. The product of all integers from 1 to n.
//3. A list of all even numbers between 1 and n.
//Ensure that the program handles the case where the user enters a non-positive integer by 
//displaying an appropriate message and prompting the user to enter a valid number again. Use a 
//loop to repeat this process until a valid input is received.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Prompt the user until a valid positive integer is entered
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Invalid input! Please enter a positive integer.\n");
        }
    } while (n <= 0); 

    // Variables for sum and product
    int sum = 0;
    long long product = 1; // Use long long to avoid overflow for large n

    // Computation to calculate sum, product, and print even numbers
    printf("Even numbers between 1 and %d: ", n);
    for (int i = 1; i <= n; i++) {
        sum += i; 
        product *= i; 

        if (i % 2 == 0) { // Check if the number is even
            printf("%d ", i); 
        }
    }

    // Output
    printf("\nSum of all integers from 1 to %d: %d\n", n, sum);
    printf("Product of all integers from 1 to %d: %lld\n", n, product);

    return 0;
}
