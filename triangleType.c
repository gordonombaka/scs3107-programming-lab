// Write a function that takes three integers as input and determines the type of triangle they can 
//form (equilateral, isosceles, or scalene). The function should also check if the three sides can 
//form a valid triangle using the triangle inequality theorem. Use an if-else statement to handle the 
//different conditions:

#include <stdio.h>
#include <stdlib.h>

int determineTypeOfTriangle (int a, int b, int c);

// Computation

int determineTypeOfTriangle(int a, int b, int c) {
    // Check for a valid triangle using the triangle inequality theorem
    if (a + b > c &&  + c > b && b + c > a) {
        // Determine the type of triangle
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || a == c || b == c) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The lengths do not form a valid triangle.\n");
    }

}

int main() {
    int side1, side2, side3;

    // User inputs
    printf("Enter the lengths of three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Output
    determineTypeOfTriangle(side1, side2, side3);

    return 0;
}