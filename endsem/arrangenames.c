#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 100

void sortNames(char names[][MAX_LENGTH], int n) {
    char temp[MAX_LENGTH];
    
    // Sorting the names using simple bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names[i] and names[j] using strcpy
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    int n;
    
    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar(); // To clear the newline character from the input buffer
    
    char names[MAX_NAMES][MAX_LENGTH];
    
    // Input the names
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        fgets(names[i], MAX_LENGTH, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';  // Remove the newline character
    }
    
    // Sort the names alphabetically
    sortNames(names, n);
    
    // Output the sorted names
    printf("\nThe names in alphabetical order are:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
