#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;  // Store the original number
    int reversedNum = 0;
    int remainder;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;  // Get the last digit of the number
        reversedNum = reversedNum * 10 + remainder;  // Add the digit to the reversed number
        num /= 10;  // Remove the last digit from the number
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        return 1;  // It's a palindrome
    } else {
        return 0;  // It's not a palindrome
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
