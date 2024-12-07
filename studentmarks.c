#include <stdio.h>

#define MAX_STUDENTS 10
#define MAX_SUBJECTS 5

int main() {
    int marks[MAX_STUDENTS][MAX_SUBJECTS];  // 2D array to store marks
    int choice, student, subject;
    float average;
    int highest, lowest;

    while (1) {
        // Display the menu
        printf("\nMenu:\n");
        printf("1. Enter marks for a student\n");
        printf("2. Calculate average marks for each student\n");
        printf("3. Find highest and lowest marks in each subject\n");
        printf("4. Display all marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Enter marks for a student
                printf("Enter student number (0 to 9): ");
                scanf("%d", &student);
                
                if (student < 0 || student >= MAX_STUDENTS) {
                    printf("Invalid student number!\n");
                    break;
                }

                for (subject = 0; subject < MAX_SUBJECTS; subject++) {
                    do {
                        printf("Enter marks for subject %d (0-100): ", subject + 1);
                        scanf("%d", &marks[student][subject]);
                        
                        if (marks[student][subject] < 0 || marks[student][subject] > 100) {
                            printf("Invalid marks! Please enter a value between 0 and 100.\n");
                        }
                    } while (marks[student][subject] < 0 || marks[student][subject] > 100);
                }
                break;
                
            case 2:
                // Calculate average marks for each student
                for (student = 0; student < MAX_STUDENTS; student++) {
                    int sum = 0;
                    for (subject = 0; subject < MAX_SUBJECTS; subject++) {
                        sum += marks[student][subject];
                    }
                    average = sum / (float)MAX_SUBJECTS;
                    printf("Average marks for student %d: %.2f\n", student, average);
                }
                break;
                
            case 3:
                // Find highest and lowest marks in each subject
                for (subject = 0; subject < MAX_SUBJECTS; subject++) {
                    highest = marks[0][subject];
                    lowest = marks[0][subject];
                    
                    for (student = 1; student < MAX_STUDENTS; student++) {
                        if (marks[student][subject] > highest) {
                            highest = marks[student][subject];
                        }
                        if (marks[student][subject] < lowest) {
                            lowest = marks[student][subject];
                        }
                    }
                    printf("Subject %d: Highest = %d, Lowest = %d\n", subject + 1, highest, lowest);
                }
                break;
                
            case 4:
                // Display all marks
                for (student = 0; student < MAX_STUDENTS; student++) {
                    printf("Student %d: ", student);
                    for (subject = 0; subject < MAX_SUBJECTS; subject++) {
                        printf("%d ", marks[student][subject]);
                    }
                    printf("\n");
                }
                break;
                
            case 5:
                // Exit the program
                printf("Exiting the program...\n");
                return 0;
                
            default:
                printf("Invalid choice! Please enter a valid option (1-5).\n");
        }
    }

    return 0;
}
