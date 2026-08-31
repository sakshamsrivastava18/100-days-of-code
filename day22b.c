#include <stdio.h>

int main()
{
    int n, i;
    int numerator = 1;
    int denominator = 2;
    float sum = 1.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        sum = sum + (float)numerator / denominator;

        numerator = numerator + 2;
        denominator = denominator + 2;
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}

