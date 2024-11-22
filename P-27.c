#include<stdio.h>

int main () {

    int days;
    float months;     //for a decimal value ke liye float 

    printf("Enter the number of days : ");
    scanf("%d", &days);

    //conver days in to months 
    months = days / 30.0;

    //output
    printf("%.2f months", months);

}
