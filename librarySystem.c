#include <stdio.h>
#include <string.h>

int main() {
    // Structure to store book information
    struct Book {
        char title[100];
        char author[100];
        int availability;  // 1 for available, 0 for borrowed
    };

    struct Book library[100];  // Array to store up to 100 books
    int count = 0;  // Variable to track the number of books
    int choice;

    while (1) {
        // Print output
        printf("\nLibrary System:\n");
        printf("1. Add a new book\n");
        printf("2. Borrow a book\n");
        printf("3. Return a book\n");
        printf("4. Display all books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                if (count >= 100) {
                    printf("More books cannot be added.\n");
                    break;
                }

                // Get book details from user
                printf("\nEnter book title: ");
                getchar();  // To consume the newline character left by scanf
                fgets(library[count].title, sizeof(library[count].title), stdin);
                library[count].title[strcspn(library[count].title, "\n")] = '\0';  

                printf("Enter author name: ");
                fgets(library[count].author, sizeof(library[count].author), stdin);
                library[count].author[strcspn(library[count].author, "\n")] = '\0';  

                library[count].availability = 1;  // New book is available

                count++;
                printf("Book added successfully.\n");
                break;
            }
            case 2: {
                char title[100];
                int found = 0;

                // Get the title of the book to borrow
                printf("\nEnter the title of the book you want to borrow: ");
                getchar();  
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = '\0';  

                // Loop through the library to find the book
                for (int i = 0; i < count; i++) {
                    if (strcmp(library[i].title, title) == 0) {
                        found = 1;
                        if (library[i].availability == 1) {
                            library[i].availability = 0;  // Mark the book as borrowed
                            printf("You have borrowed \"%s\" successfully.\n", library[i].title);
                        } else {
                            printf("Sorry, \"%s\" is already borrowed.\n", library[i].title);
                        }
                        break;
                    }
                }

                if (!found) {
                    printf("Book \"%s\" not found in the library.\n", title);
                }
                break;
            }
            case 3: {
                char title[100];
                int found = 0;

                // Get the title of the book to return
                printf("\nEnter the title of the book you want to return: ");
                getchar();  // To consume the newline character left by scanf
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = '\0';  // Remove trailing newline

                // Loop through the library to find the book
                for (int i = 0; i < count; i++) {
                    if (strcmp(library[i].title, title) == 0) {
                        found = 1;
                        if (library[i].availability == 0) {
                            library[i].availability = 1;  // Mark the book as available
                            printf("You have returned \"%s\" successfully.\n", library[i].title);
                        } else {
                            printf("\"%s\" was not borrowed.\n", library[i].title);
                        }
                        break;
                    }
                }

                if (!found) {
                    printf("Book \"%s\" not found in the library.\n", title);
                }
                break;
            }
            case 4: {
                if (count == 0) {
                    printf("No books in the library.\n");
                    break;
                }

                printf("\nLibrary Books:\n");
                for (int i = 0; i < count; i++) {
                    printf("Title: %s\n", library[i].title);
                    printf("Author: %s\n", library[i].author);
                    printf("Status: %s\n", library[i].availability == 1 ? "Available" : "Borrowed");
                    printf("\n");
                }
                break;
            }
            case 5:
                printf("Exiting the library system.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
