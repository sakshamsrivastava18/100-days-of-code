#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print first character
    printf("Initials: %c", name[0]);

    // Print character after every space
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
    }

    return 0;
}