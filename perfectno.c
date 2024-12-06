#include <stdio.h>

int main() {
    int n, sum = 0;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the sum of all positive divisors excluding the number itself
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if the sum is equal to the original number
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}
