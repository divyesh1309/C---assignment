#include<stdio.h>

int main () {

    int num, reversedNum, remainder, originalNum, count = 0;

    while (count < 3) {
        printf("Enter a number : ");
        scanf("%d", &num);
        
        originalNum = num; 
        reversedNum = 0;

        // Reverse number
        while (num != 0) {
            remainder = num % 10;       
            reversedNum = reversedNum * 10 + remainder; 
            num = num / 10;              
        }

        //Number is a palindrome
        if (originalNum == reversedNum) {
            printf("The number %d is a palindrome\n", originalNum);
        } else {
            printf("The number %d is not a palindrome\n", originalNum);
        }
        count++;  
    }

    return 0;


}