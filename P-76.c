#include<stdio.h>

int main () {

    int number, evenCount = 0, oddCount = 0, i = 1;

    while (i <= 5) {
        printf("Enter number %d : ", i);
        scanf("%d", &number);

        // Check if the number is even or odd
        if (number % 2 == 0) {
            evenCount++;  
        } else {
            oddCount++;   
        }
        i++; 
    }

    //output
    printf("\nTotal even numbers : %d\n", evenCount);
    printf("Total odd numbers : %d\n", oddCount);

    return 0;


}