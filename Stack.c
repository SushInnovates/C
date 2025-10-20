#include <stdio.h>
#define SIZE 5

int main() {
    int stack[SIZE], top = -1;

    // push elements
    for (int i = 0; i < SIZE; i++) {
        stack[++top] = i + 1;
    }

    // display stack
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    return 0;
}
