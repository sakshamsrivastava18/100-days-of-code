//Write a program to find the LCM of two numbers.(loops without array/strings)
#include<stdio.h>
int main(){
    int num1, num2, max, lcm;
    printf("enter two numbers:");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2; 
    lcm = max;
    while(1){
        if(lcm % num1 == 0 && lcm % num2 == 0){
            printf("LCM of %d and %d is %d", num1, num2, lcm);
            break;
        }
        lcm += max;
    }
    return 0;
}