#include <stdio.h>

int main() {
    int number, prime_count = 0, composite_count = 0;

    printf("Enter numbers (-1 to stop):\n");

    do {
        scanf("%d", &number);

        if (number == -1) break; // Stop when -1 is encountered
        if (number <= 1) continue; // Skip numbers less than or equal to 1

        int is_prime = 1; // Assume the number is prime
        int divisor = 2;

        // Check divisibility using while loop
        while (divisor * divisor <= number) {
            if (number % divisor == 0) {
                is_prime = 0; // Not a prime number
                break;
            }
            divisor++;
        }

        if (is_prime) {
            prime_count++;
        } else {
            composite_count++;
        }
    } while (number != -1);

    printf("Total prime numbers: %d\n", prime_count);
    printf("Total composite numbers: %d\n", composite_count);

    return 0;
}
