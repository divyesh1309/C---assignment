#include<stdio.h>

int main () {

    //Find Area of Cube formula : a = 6a2 

    int side, surface_area;

    printf("Enter the length of the side of the cube : ");
    scanf("%d", &side);

    // Calculate surface area
    surface_area = 6 * side * side;

    // Display the result
    printf("Surface area of the cube : %d\n", surface_area);

    return 0;

}