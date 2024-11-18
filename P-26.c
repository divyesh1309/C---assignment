#include<stdio.h>

int main  () {

    //convert temperature fahrenheit to celsius 

    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);

    //Convert fahrenheit to celsius 
    celsius = (fahrenheit - 32) * 5 / 9;

    //output
    printf("Temperature in Celsius : %.2f\n", celsius);


    return 0;


}