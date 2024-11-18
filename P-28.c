#include<stdio.h>

int main () {

    int years, days, months;

    printf("Enter the number of years : ");
    scanf("%d", &years);

    days = years * 365;

    //convert Days into months 
    months = days / 30;        
    days = days % 30;          

    //output
    printf("%d years is approximately , %d months , and %d days.\n", years, months, days);


    return 0;


}