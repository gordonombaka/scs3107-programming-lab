#include <stdio.h>
#include <stdlib.h>

// Grade Calculator
int main() {
    int score1, score2, score3;
    float average;

    // User Input
    printf("Please enter your scores for three subjects (separated by commas): ");
    scanf("%d, %d, %d", &score1, &score2, &score3);
    
    // Computation
    average = (score1 + score2 + score3) / 3.0; // Use 3.0 to ensure floating-point division

    // Output the average score
    printf("Your average score is %.2f. ", average);

    // Determine letter grade using switch-case
    int gradeTens = (int)average / 10; // Get the tens digit of the average score
    char grade;

    switch (gradeTens) {
        case 10: // This case will capture average of 100
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    // Output the letter grade
    printf("Your grade is %c.\n", grade);

    return 0;
}


    