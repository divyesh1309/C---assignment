#include<stdio.h>

int main () {

    //Find area of Rectangle Formula : A=wl 

    int length, width, area;

    printf("Enter the length of Rectangle : ");
    scanf("%d", &length);
    
    printf("Enter the width of Rectangle : ");
    scanf("%d", &width);

    // Calculate area
    area = width * length;

    // Display the result
    printf("Area of the Rectangle : %d\n", area);

    return 0;

}