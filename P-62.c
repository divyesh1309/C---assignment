#include <stdio.h>

int main() {
    
    int num, evenCount = 0, oddCount = 0;  
    int evenSum = 0, oddSum = 0;           

    printf("Enter 10 numbers : \n");

    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        //even or odd
        if (num % 2 == 0) {
            evenCount++;            
            evenSum += num;         
        } else {
            oddCount++;             
            oddSum += num;          
        }
    }

    //output
    printf("\nNumber of even numbers : %d\n", evenCount);
    printf("Number of odd numbers : %d\n", oddCount);
    printf("Sum of even numbers : %d\n", evenSum);
    printf("Sum of odd numbers : %d\n", oddSum);


    return 0;

}
