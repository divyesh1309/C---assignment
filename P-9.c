#include<stdio.h>

int main () {

    //Find circumference of Triangle formula : triangle = a + b + c 

   int a, b, c, circumference;

    printf("Enter the length of side a : ");
    scanf("%d", &a);
    
    printf("Enter the length of side b : ");
    scanf("%d", &b);
    
    printf("Enter the length of side c : ");
    scanf("%d", &c);

    //Calculate circumference
    circumference = a + b + c;

    //output
    printf("Circumference of the triangle : %d\n", circumference);

    return 0;

}