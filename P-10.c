#include<stdio.h>

int main () {

    //find the area of a rectangular prism formula : A=2(wl+hl+hw) ? 

    int width, length, height, surface_area;

    printf("Enter the width of the rectangle prism : ");
    scanf("%d", &width);
    
    printf("Enter the length of the rectangle prism : ");
    scanf("%d", &length);

    printf("Enter the height of the rectangle prism : ");
    scanf("%d", &height);

    // Calculate surface area 
   surface_area = 2 * (width * length + height * length + height * width);

    //output
    printf("surface area of the rectangle prism : %d\n", surface_area);

    return 0;
}