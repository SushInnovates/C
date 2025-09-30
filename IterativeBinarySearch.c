#include <stdio.h>

void BinarySearch() {
    int arr[5], i, key, low, high, mid, flag = 0;

    // Input sorted array
    printf("Enter 5 sorted elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = 4;

    // Binary search process
    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element %d found at index %d\n", key, mid);
            flag = 1;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(flag == 0)
        printf("Element not found!\n");
}

int main() {
    BinarySearch();
    return 0;
}
