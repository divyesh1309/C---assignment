#include<stdio.h>

int main  () {

    //Find circumference of Rectangle formula : C = 4 * a 

    int width, length, circumference;

    printf("Enter the width of the rectangle : ");
    scanf("%d", &width);
    
    printf("Enter the length of the rectangle : ");
    scanf("%d", &length);

    // Calculate circumference 
    circumference = 2 * (width + length);

    //output
    printf("Circumference of the rectangle : %d\n", circumference);

    return 0;


}