#include<stdio.h>

int main () {

      int days,years;

    printf("Enter year to convert into days : ");
    scanf("%d",&years);
    days=years*365;
    printf("%d year = %d days",years,days);

    printf("\nEnter days to convert into year: ");
    scanf("%d",&days);
    years=days/365;
    printf("%d days =  %d year",days,years);

    return 0;
}