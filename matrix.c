#include<stdio.h>

void sortArray(int arr[][100], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < r; k++) {
                for (int l = 0; l < c; l++) {
                    if (arr[i][j] < arr[k][l]) {
                        int temp = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = temp;
                    }
                }
            }
        }
    }
}

int main() {
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of cols: ");
    scanf("%d", &c);

    int arr[100][100];
    printf("Enter Elements --->\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nInput Array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    // Sort the array
    sortArray(arr, r, c);

    // Print sorted array
    printf("\nSorted Array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
