#include <stdio.h>
#include <math.h>

int main() {

    double P, R, T, CI, amount;         //principal , Rate, Time ,Compound interest

    printf("Enter the principal amount : ");
    scanf("%lf", &P);

    printf("Enter the interest rate : ");
    scanf("%lf", &R);

    printf("Enter the time period in years : ");
    scanf("%lf", &T);

    // Calculate
    amount = P * pow((1 + R / 100), T);

    // Calculate compound interest
    CI = amount - P;

    //output
    printf("The compound interest is: %.2f\n", CI);
    printf("The total amount after interest is: %.2f\n", amount);

    return 0;

    
}
