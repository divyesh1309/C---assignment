#include<stdio.h>

int main () {

    int n;
    int sum;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    //using the formula
    sum = n * (n + 1) / 2;

    //output
    printf("The sum of numbers from 1 to %d is : %d\n", n, sum);

    return 0;


}