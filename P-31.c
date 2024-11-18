#include <stdio.h>

int main() {

    float kilometers, meters;

    printf("Enter distance in kilometers : ");
    scanf("%f", &kilometers);

    //convert
    meters = kilometers * 1000;

    //output
    printf("%.2f kilometers is = %.2f meters.\n", kilometers, meters);

    return 0;

}
