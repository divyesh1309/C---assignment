#include<stdio.h>

int main () {

    int base, height, area;

    printf("Enter the base of the triangle : ");
    scanf("%d", &base);
    
    printf("Enter the height of the triangle : ");
    scanf("%d", &height);

    // Calculate area
    area = 0.5 * base * height;

    // Display the result
    printf("Area of the triangle : %d\n", area);

    return 0;

}