#include <stdio.h>

int main() {
    int n, num = 1; // `num` is used to generate natural numbers
    printf("Enter height: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // Loop through rows
        for (int j = 1; j <= i; j++) { // Loop through columns in each row
            printf("%d ", num); // Print the current natural number
            num++; // Increment the natural number
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
