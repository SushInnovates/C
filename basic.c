
#include <stdio.h>

int main() {
    // Variable declarations with different data types
    int age;
    float height;
    char initial;
    
    // Constants
    const double PI = 3.14159;
    
    // Output using printf
    printf("C Programming Basics\n");
    printf("--------------------\n");
    
    // Input using scanf
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    
    printf("Enter your first initial: ");
    // Clear input buffer
    while ((getchar()) != '\n');
    scanf("%c", &initial);
    
    // Calculations and formatted output
    printf("\nYour Info:\n");
    printf("Age: %d years\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Initial: %c\n", initial);
    printf("In 5 years, you will be %d years old.\n", age + 5);
    
    // Using constants
    printf("The value of PI is: %f\n", PI);
    
    return 0;
}
