#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[100];
    int age;
    
    // Ask user for their name and age
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Read name (including spaces)
    
    // Remove the newline character at the end of name if present
    name[strcspn(name, "\n")] = '\0';  
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // Open the file user_info.txt for writing
    FILE *file = fopen("user_info.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    
    // Write the name and age to the file
    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);  // Close the file
    
    // Now, open the file for reading
    file = fopen("user_info.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    
    // Read and display the information from the file
    char buffer[256];
    printf("\nStored information:\n");
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }
    
    fclose(file);  // Close the file
    
    return 0;
}
