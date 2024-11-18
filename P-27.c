#include<stdio.h>

int main () {

    int days, months;

    printf("Enter the number of days : ");
    scanf("%d", &days);

    //convert
    months = days / 30;

    //output
    printf("%d months\n", months);

    return 0;

}