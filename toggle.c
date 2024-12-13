#include<stdio.h>
#include<string.h>
#include<ctype.h>

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, 1000, stdin);
    str[strcspn(str, "\n")] = '\0';
    toggleCase(str);
    printf("Toggled case: %s\n", str);
    return 0;
}