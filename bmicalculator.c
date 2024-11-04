#include <stdio.h>
#include <stdlib.h>

// BMI Calculator
int main() {
    float height, weight, bmi;

    // User Input
    printf("Please Enter your weight in Kilograms: ");
    scanf("%f", &weight);
    printf("Please Enter your height in meters: ");
    scanf("%f", &height);

    // Computation
    bmi = weight / (height * height);

    // Output the BMI and classification
    printf("Your BMI is %.2f. ", bmi);
    
    // Classification
    if (bmi < 18.5) {
        printf("You are classified as Underweight.\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("You are classified as Normal weight.\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("You are classified as Overweight.\n");
    } else {
        printf("You are classified as Obese.\n");
    }

    return 0;
}




