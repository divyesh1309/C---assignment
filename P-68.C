#include<stdio.h>

int main () {

    int num, sum = 0, remainder;

    printf("Enter a number : ");
    scanf("%d", &num);

    //number positive or negative
    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        remainder = num % 10; 
        sum += remainder;     
        num /= 10;            
    }

    //output
    printf("Sum of digits is %d\n", sum);

    return 0;

}