#include <stdio.h>

int main() {
    double x, sin_value = 0.0, term;
    int n, sign = 1;

    // Get user input
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms to evaluate: ");
    scanf("%d", &n);

    term = x;  // First term is just 'x'

    for (int i = 1; i <= n; i++) {
        sin_value += sign * term; // Add the current term to the sine value

        // Update sign to alternate between positive and negative
        sign = -sign;

        // Calculate the next term
        term = term * x * x / ((2 * i) * (2 * i + 1));
    }

    // Print the result
    printf("The sine of %.2f using %d terms is: %.6f\n", x, n, sin_value);

    return 0;
}
