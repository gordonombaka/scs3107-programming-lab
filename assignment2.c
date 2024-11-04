// Write a program that calculates the surface area and volume of a cylinder using two functions. 
//The functions should come before the definition of the global variables’ radius and height, so use 
//the extern keyword to access these variables inside the functions.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function declarations
float calculateSurfaceArea();
float calculateVolume();

// Global variables
extern float radius;
extern float height;

// Define global variables
float radius = 7.0;  
float height = 21.0;

// Computation

float calculateSurfaceArea() {
    return 2 * M_PI * radius * (radius + height);
}

float calculateVolume() {
    return M_PI * radius * radius * height;
}

int main() {
    // Calculate surface area and volume
    float surfaceArea = calculateSurfaceArea();
    float volume = calculateVolume();

    // Display the results
    printf("Surface Area of the Cylinder: %.2f\n", surfaceArea);
    printf("Volume of the Cylinder: %.2f\n", volume);

    return 0;
}


