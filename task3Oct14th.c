#include <stdio.h>
#include <stdlib.h>

// program that asks user for exam score(0 - 100)
// program determines corresponding grade


int main()
{
    // Create variables

    int exam_score;

    // Ask for user input

    printf("Enter your exam score(Value between 0 - 100): ");
    scanf("%d", &exam_score);
  

    // Computation

    if (exam_score >= 90) {
        printf("With a score of %d, your grade is A", exam_score);
    }
    else if (exam_score >= 80) {
        printf("With a score of %d, your grade is B", exam_score);
    }
    else if (exam_score >= 70) {
        printf("With a score of %d, your grade is C", exam_score);
    }
    else if (exam_score >= 60) {
        printf("With a score of %d, your grade is D", exam_score);
    }
    else if (exam_score < 60) {
        printf("With a score of %d, your grade is F", exam_score);
    }
    else {
        printf("Please enter a value between 0 to 100", exam_score);
    }


    return 0;
}
