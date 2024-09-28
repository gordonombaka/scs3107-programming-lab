/*Write the code below and compile it. 
Study the output  of the program as a result of the use of different format modifiers.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Type formats in printf \n\n");
    printf("-----------------------------------------------------------------\n");
    printf("Floating pointing values \n");
    printf("Float literal 1234.12345678\n");
    printf(">8 spaces, 1 decimal value 8.1f:[%8.1f]\n", 1234.12345678);
    printf(">8 spaces, 3 decimal values 8.3f:[%8.3f]\n", 1234.12345678);
    printf(">2 spaces, 3 decimal values 2.3f:[%2.3f]\n", 1234.12345678);
    printf(">12 spaces, 6 decimal values 12.6f:[%12.6f]\n", 1234.12345678);
    printf(">20 spaces, 6 decimal values 20.6f:[%20.6f]\n", 1234.12345678);
    printf(">Same as before, left align -20.6f:[%-20.6f]\n, 1234.12345678");
    printf("\n----------------------------------------------------------------\n");
    printf("Strings \n");
    printf("String[hello madrid]\n");
    printf(">Direct print: [hello madrid]\n");
    printf(">With placeholder: [%s]\n", "hello madrid");
    printf(">Using width specifier (20 spaces , 4 letters) 20.4s: [%20.4s]\n", "hello madrid");
    printf("\n");
    
    system("pause");
    return (0);

}