#include <stdio.h>

int main() {
    int n, num, rem, sum = 0;
    printf("Enter a n: ");
    scanf("%d", &n);
    num = n;
    while (n != 0) {
        rem = n % 10;             
        sum += rem * rem * rem;
        n /= 10;                        
    }

    if (sum == num) {
        printf("%d is an Armstrong n.\n", num);
    } else {
        printf("%d is not an Armstrong n.\n", num);
    }

    return 0;
}
