#include<stdio.h>
#include<math.h>

int main () {

    double P, R, T, amount, CI;    //principal, rate, time, amount, compoundInterest

    printf("Enter the principal amount : ");
    scanf("%lf", &P);

    printf("Enter the rate of interest : ");
    scanf("%lf", &R);

    printf("Enter the time period in years : ");
    scanf("%lf", &T);

    // Compound interest
    amount = P * pow((1 + R / 100), T);

    CI = amount - P;

    //output
    printf("Total Amount = %.2f\n", amount);
    printf("Compound Interest = %.2f\n", CI);


    return 0;


}