#include<stdio.h>

int main () {

    float years, days, months;

    printf("Enter the number of years : ");
    scanf("%f", &years);

    days = years * 365;

    //convert Days into months 
    days = years*365;
    months = years*12;         

    //output
    printf("%.2f years is approximately , %.2f months , and %.2f  days.\n", years, months, days);


    return 0;


}