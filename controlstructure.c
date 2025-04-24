#include <stdio.h>

int main() {
    int number, i;
    
    // Input
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // If-else conditional statement
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("You entered zero.\n");
    }
    
    // Switch statement
    printf("\nCategory check: ");
    switch (number % 2) {
        case 0:
            printf("%d is even.\n", number);
            break;
        case 1:
        case -1:
            printf("%d is odd.\n", number);
            break;
        default:
            printf("Unexpected result.\n");
    }
    
    // For loop
    printf("\nCounting from 1 to %d:\n", number);
    for (i = 1; i <= number && i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // While loop
    printf("\nCounting down from %d:\n", number);
    i = number;
    while (i >= 0 && i >= number - 5) {
        printf("%d ", i);
        i--;
    }
    printf("\n");
    
    // Do-while loop
    printf("\nMultiplication table for %d:\n", number);
    i = 1;
    do {
        printf("%d × %d = %d\n", number, i, number * i);
        i++;
    } while (i <= 5);
    
    return 0;
}
