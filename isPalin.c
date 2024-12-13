#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 40
// Function to check if a string is a palindrome
int IsPalin(char str[max]) {
    int start = 0;
    int end = strlen(str) - 1;

    // Compare characters from both ends
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  // Not a palindrome
        }
        start++;
        end--;
    }
    return 1;  // Is a palindrome
}

// Main function to test the IsPalin function
int main() {
    char str[max];

    // Input from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string is a palindrome
    if (IsPalin(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}
