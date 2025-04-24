
#include <stdio.h>

// Function declarations (prototypes)
void printArray(int arr[], int size);
int findMax(int arr[], int size);
float calculateAverage(int arr[], int size);
void modifyArray(int arr[], int size, int factor);

int main() {
    // Array declaration and initialization
    int numbers[5];
    int i, size = 5;
    
    // Getting array elements from user
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Using functions with arrays
    printf("\nYou entered: ");
    printArray(numbers, size);
    
    printf("\nMaximum value: %d", findMax(numbers, size));
    printf("\nAverage value: %.2f", calculateAverage(numbers, size));
    
    // Modifying the array through a function
    printf("\n\nMultiplying all elements by 2...");
    modifyArray(numbers, size, 2);
    
    printf("\nModified array: ");
    printArray(numbers, size);
    
    return 0;
}

// Function definitions
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int findMax(int arr[], int size) {
    int max = arr[0];
    int i;
    
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

float calculateAverage(int arr[], int size) {
    int sum = 0;
    int i;
    
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return (float)sum / size;
}

void modifyArray(int arr[], int size, int factor) {
    int i;
    for (i = 0; i < size; i++) {
        arr[i] *= factor;
    }
}
