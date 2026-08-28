#include<stdio.h>
int main(){
    float length, breadth, area, perimeter;
    printf("enter length of rectangle");
    scanf("%f", &length);
    printf("enter breadth of rectangle ");
    scanf("%f", &breadth );
    
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    
    printf("area of rectangle = %.2f\n", area);
    printf("perimeter of ractangle = %.2f\n", perimeter);

    return 0;
}