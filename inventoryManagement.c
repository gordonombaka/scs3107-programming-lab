#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 5

int main() {
    char productNames[MAX_PRODUCTS][30];
    int quantities[MAX_PRODUCTS] = {0};
    int productCount = 0;
    int choice, quantity, i, found;
    char productName[30];

    while (1) {
        // Display the menu
        printf("\nInventory Management System:\n");
        printf("1. Add Product\n");
        printf("2. Sell Product\n");
        printf("3. Check Inventory\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Add Product
                if (productCount < MAX_PRODUCTS) {
                    printf("Enter the product name: ");
                    scanf("%s", productNames[productCount]);
                    printf("Enter the quantity: ");
                    scanf("%d", &quantities[productCount]);
                    productCount++;
                    printf("Product added successfully!\n");
                } else {
                    printf("Inventory is full. Cannot add more products.\n");
                }
                break;

            case 2: // Sell Product
                printf("Enter the product name to sell: ");
                scanf("%s", productName);

                found = 0; // Flag to check if product is found
                for (i = 0; i < productCount; i++) {
                    if (strcmp(productNames[i], productName) == 0) {
                        found = 1;
                        if (quantities[i] > 0) {
                            printf("Enter quantity to sell: ");
                            scanf("%d", &quantity);
                            if (quantity <= quantities[i]) {
                                quantities[i] -= quantity;
                                printf("Sold %d units of %s.\n", quantity, productNames[i]);
                            } else {
                                printf("Not enough stock to sell %d units of %s.\n", quantity, productNames[i]);
                            }
                        } else {
                            printf("Product %s is out of stock.\n", productNames[i]);
                        }
                        break;
                    }
                }
                if (!found) {
                    printf("Product not found in inventory.\n");
                }
                break;

            case 3: // Check Inventory
                printf("\n--- Inventory ---\n");
                if (productCount == 0) {
                    printf("No products in inventory.\n");
                } else {
                    for (i = 0; i < productCount; i++) {
                        printf("Product: %-20s | Quantity: %-3d\n", productNames[i], quantities[i]);
                        if (quantities[i] == 0) {
                            printf("    (Out of stock)\n");
                        }
                    }
                }
                break;

            case 4: // Exit
                printf("Exiting the inventory system.\n");
                return 0;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
