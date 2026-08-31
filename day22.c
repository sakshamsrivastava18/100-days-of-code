#include <stdio.h>

int main()
{
    int num, originalNum, digit;
    int factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0)
    {
        digit = num % 10;   

        factorial = 1;

        
        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        num = num / 10;     
    }

    if (sum == originalNum)
    {
        printf("%d is a Strong Number.", originalNum);
    }
    else
    {
        printf("%d is not a Strong Number.", originalNum);
    }

    return 0;
}