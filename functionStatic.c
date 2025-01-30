//  Write a function that demonstrates the use of a static variable by keeping track of and printing 
//the total sum of all arguments passed to it each time it is called. The function should accumulate 
//the sum across multiple calls and print the current total after each call.

#include <stdio.h>
#include <stdlib.h>

int addToTotal(int num);

int main() {
    // Calls to the function
    addToTotal(20);
    addToTotal(14);
    addToTotal(7);
    addToTotal(33);

    return 0;
}

// Computation
int addToTotal(int num) {
    static int total = 0; 
    total += num;         
    printf("Current total after adding %d: %d\n", num, total); 
}
