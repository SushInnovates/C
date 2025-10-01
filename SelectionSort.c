#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int i, j, minIndex, temp;

    // One by one move boundary of unsorted subarray
    for(i = 0; i < n-1; i++)
    {
        minIndex = i; // assume the min is the first element

        // check the rest of the array to find the true minimum
        for(j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // swap the found minimum with the first element
        if(minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
