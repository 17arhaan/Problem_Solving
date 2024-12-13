#include <stdio.h>

int countWords(char str[]) {
    int count = 0;

    // Traverse through the string using a for loop
    for (int i = 0; str[i] != '\0'; i++) {
        // Count a word when a non-space character is found
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            count++;  // We found the start of a new word
        }
    }

    return count;
}

int main() {
    char str[1000];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // Read a line of input

    int wordCount = countWords(str);
    printf("The number of words in the sentence is: %d\n", wordCount);

    return 0;
}
