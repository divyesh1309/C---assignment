#include<stdio.h>

int main () {

    //Find Area of Square formula : a = a2 

    int side, area;

    printf("Enter the length of the side of the square : ");
    scanf("%d", &side);


    // Calculate area
    area = side * side;
    

    //output
    printf("Area of the square : %d\n", area);

    return 0;

}