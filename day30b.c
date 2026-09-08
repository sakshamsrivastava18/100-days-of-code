#include <stdio.h>

int main()
{
    int arr[5], i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 5 integers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeroes = %d\n", zero);

    return 0;
}