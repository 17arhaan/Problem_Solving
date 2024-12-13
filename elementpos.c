#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX], n, pos, element;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert and its position
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert the element (1-based index): ");
    scanf("%d", &pos);

    // Shift elements to the right to make space for the new element
    for (int i = n; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[pos - 1] = element;

    // Update the size of the array
    n++;

    // Output the updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
