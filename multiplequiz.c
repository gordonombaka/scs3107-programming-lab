#include <stdio.h>

int main() {
    int answer, score = 0;

    // Question 1: What is the first color of the Kenyan flag?
    printf("Question 1: What is the first color of the Kenyan flag?\n");
    printf("1. Green\n2. White\n3. Black\n4. Red\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {  // Correct answer: Black
        score++;
    }

    // Question 2: How many counties does Kenya have?
    printf("\nQuestion 2: How many counties does Kenya have?\n");
    printf("1. 47\n2. 51\n3. 43\n4. 8\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) {  // Correct answer: 47
        score++;
    }

    // Question 3: What is the last book in the Old Testament?
    printf("\nQuestion 3: What is the last book in the Old Testament?\n");
    printf("1. Revelation\n2. Malachi\n3. Exodus\n4. Matthew\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {  // Correct answer: Malachi
        score++;
    }

    // Question 4: Which country is the largest producer of oil in Africa?
    printf("\nQuestion 4: Which country is the largest producer of oil in Africa?\n");
    printf("1. Malawi\n2. Namibia\n3. Tanzania\n4. Nigeria\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 4) {  // Correct answer: Nigeria
        score++;
    }

    // Question 5: Which is the best university in Kenya?
    printf("\nQuestion 5: Which is the best university in Kenya?\n");
    printf("1. University of Nairobi\n2. Kenyatta University\n3. Strathmore\n4. USIU\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) {  // Correct answer: University of Nairobi
        score++;
    }

    // Display the score
    printf("\nYour score is %d out of 5.\n", score);

    // Assign a grade based on the score using switch-case
    char grade;
    switch (score) {
        case 5:
            grade = 'A';
            break;
        case 4:
            grade = 'B';
            break;
        case 3:
            grade = 'C';
            break;
        case 2:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    // Display the grade
    printf("Your grade is %c.\n", grade);

    return 0;
}
