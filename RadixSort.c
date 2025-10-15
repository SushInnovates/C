#include <stdio.h>

// Function to get the maximum value in the array
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

// Counting sort used by radix sort
void countingSort(int arr[], int n, int exp) {
    int output[n]; // output array
    int count[10] = {0};

    // Count occurrences of digits
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Update count[i] so that count[i] contains actual position
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy output to arr[]
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Main radix sort function
void radixSort(int arr[], int n) {
    int max = getMax(arr, n);

    // Apply counting sort for every digit
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

// Utility function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver code
int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    radixSort(arr, n);
    printArray(arr, n);
    return 0;
}
