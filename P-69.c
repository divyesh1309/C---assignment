#include<stdio.h>

int main () {

    int num, first_Digit, last_Digit;

    printf("Enter a number : ");
    scanf("%d", &num);

    //last digit
    last_Digit = num % 10;

    //first digit
    while (num >= 10) {
        num /= 10; 
    }
    first_Digit = num;

    //Calculate
    int sum = first_Digit + last_Digit;

    //output
    printf("Sum of the first and last digit is : %d\n", sum);

    return 0;

}