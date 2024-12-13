#include <stdio.h>

int findMax(int *arr, int size) {
    int *max = arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max) {
            max = arr + i;
        }
    }
    return *max;
}

int main() {
    int n;
    printf("Enter No. of Elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements :- \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = findMax(arr, n);
    printf("The maximum number is : %d\n", max);
    return 0;
}
