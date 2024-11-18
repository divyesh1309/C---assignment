#include<stdio.h>
#include<math.h>

int main () {

    int num;

    printf("Enter the integer : ");
    scanf("%d", &num);

    //output
    printf("Powers of %d:\n", num);
    printf("%d^1 = %.0f\n", num, pow(num, 1)); // N^1
    printf("%d^2 = %.0f\n", num, pow(num, 2)); // N^2
    printf("%d^3 = %.0f\n", num, pow(num, 3)); // N^3


    return 0;



}