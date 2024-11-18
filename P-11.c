#include<stdio.h>

int main () {

    //Find circumference of square formula : C = 4 * a 

    int side, circumference;

    printf("Enter the length of side of the square : ");
    scanf("%d", &side);

    // Calculate circumference 
    circumference = 4 * side;

    //output
    printf("Circumference of the rectangle: %d\n", circumference);

    return 0;

}