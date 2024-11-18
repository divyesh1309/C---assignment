#include<stdio.h>

int main () {

    int radius, area, circumference;
    float pi = 3.14;

    printf("Enter the radius of circle : ");
    scanf("%d", &radius);

    //area and circumference
    area = pi * radius * radius ;

    //circumference
    circumference = 2 * pi * radius;

    //output 
    printf("Area of circle : %d\n", area);
    printf("Circumference of circle : %d\n", circumference);

    return 0;
}