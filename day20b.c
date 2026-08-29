//Write a program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
int main(){
    int num, binary[32], i = 0;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    
    
    while(num > 0){
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    
    printf("1's complement: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binary[j] == 0 ? 1 : 0);
    }
    printf("\n");
    
    return 0;
}