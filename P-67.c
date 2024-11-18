#include<stdio.h>

int main () {

    int num, maxDigit = 0, remainder;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }
    //find maximum digit
    while (num != 0) {
        remainder = num % 10;        
        if (remainder > maxDigit) {  
            maxDigit = remainder;
        }
        num /= 10;                  
    }
    
    //output
    printf("Max digit is : %d\n", maxDigit);

    return 0;

}