#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX], n, element, pos = -1;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Validate array size
    if (n <= 0 || n > MAX) {
        printf("Invalid size. Please enter a size between 1 and %d.\n", MAX);
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search and delete
    printf("Enter the element to search and delete: ");
    scanf("%d", &element);

    // Search for the element in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i; // Store the position of the element
            break;
        }
    }

    // Check if the element was found
    if (pos == -1) {
        printf("Element %d not found in the array.\n", element);
    } else {
        // Delete the element by shifting remaining elements
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Reduce the size of the array

        // Display the resultant array
        printf("Array after deletion:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
