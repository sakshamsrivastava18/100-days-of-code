#include <stdio.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Find the last space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("Output: ");

    // Print initials of first and middle names
    printf("%c", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ') {
            printf(".%c", name[i + 1]);
        }
    }

    // Print surname in full
    printf(". ");
    
    for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++) {
        printf("%c", name[i]);
    }

    return 0;
}