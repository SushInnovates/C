
#include <stdio.h>
#include <string.h>

// Structure definition
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function using pointers
void swap(int *a, int *b);
void updateMarks(struct Student *student, float newMarks);

int main() {
    // Pointers basics
    int x = 10, y = 20;
    int *ptr_x, *ptr_y;
    
    // Assigning addresses to pointers
    ptr_x = &x;
    ptr_y = &y;
    
    printf("Pointer Demonstration:\n");
    printf("----------------------\n");
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of ptr_x: %p\n", ptr_x);
    printf("Value pointed by ptr_x: %d\n\n", *ptr_x);
    
    // Pointer manipulation
    *ptr_x = 15;  // Changing value through pointer
    printf("After changing value through pointer:\n");
    printf("New value of x: %d\n\n", x);
    
    // Pointers with functions
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n\n", x, y);
    
    // Working with structures
    struct Student s1;
    
    // Initialize structure
    strcpy(s1.name, "John Doe");
    s1.rollNumber = 101;
    s1.marks = 85.5;
    
    // Display structure data
    printf("Student Information:\n");
    printf("-------------------\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollNumber);
    printf("Marks: %.1f\n\n", s1.marks);
    
    // Using structure with pointers
    updateMarks(&s1, 92.0);
    printf("After updating marks: %.1f\n", s1.marks);
    
    return 0;
}

// Function definitions using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void updateMarks(struct Student *student, float newMarks) {
    student->marks = newMarks; // Arrow operator to access structure members via pointer
}
