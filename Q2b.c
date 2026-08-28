#include<stdio.h>
int main(){
    float radius, area, circumference;
    printf("enter radius of circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("area of circle = %.2f\n", area);
    printf("circumference of circle = %.2f\n", circumference);


    return 0;

}