#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Rotation is possible only if lengths are same
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation\n");
        return 0;
    }

    // Join str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 exists inside str1 + str1
    if (strstr(temp, str2) != NULL)
        printf("Strings are rotations\n");
    else
        printf("Strings are not rotations\n");

    return 0;
}