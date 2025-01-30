#include <stdio.h>

int main() {
    int numbers[5];  // Array to store 5 integers
    int sum = 0;     // Variable to store the sum of the elements
    
    // Accept 5 integers from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Calculate the sum of the elements in the array
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    
    // Display the sum
    printf("\nThe sum of the entered integers is: %d\n", sum);
    
    return 0;
}
