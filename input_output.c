/* This example shows an example of basic input/output C program*/

#include <stdio.h> 
void main() {

/*Declare variables to hold the two numbers to be added and the answer (integers)*/

int num1, num2, sum;

// Ask user for input

printf ("Enter the first number: ");
scanf("%d", &num1);
printf ("Enter the second number: ");
scanf("%d", &num2);

// Add the two numbers

sum = num1 + num2;

// Output the sum

printf("\n%d + %d = %d", num1, num2, sum);

} //end