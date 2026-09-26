#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start = 0, i, j;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; ; i++) {

        
        if (str[i] == ' ' || str[i] == '\0') {

        
            j = i - 1;

            while (start < j) {
                temp = str[start];
                str[start] = str[j];
                str[j] = temp;

                start++;
                j--;
            }

        
            start = i + 1;
        }

    
        if (str[i] == '\0')
            break;
    }

    printf("Reversed words: %s\n", str);

    return 0;
}