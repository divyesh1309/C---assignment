#include<stdio.h>

int main () {

    int unit;
    float amount, total_amount, surcharge;

    printf("Enter total units consumed : ");
    scanf("%d", &unit);


    if(unit <= 50)
    {
        amount = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amount = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amount = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amount = 220 + ((unit-250) * 1.50);
    }

    surcharge = amount * 0.20;
    total_amount  = amount + surcharge;

    printf("Total Electricity Bill is Rs : %.2f/-", total_amount);

    return 0;
    
}