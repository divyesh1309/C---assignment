#include <stdio.h>

int main() {

    int num, factorial = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    //num is non-negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers\n");
    } else {
        int i = 1;
        //Calculate factorial
        while (i <= num) {
            factorial *= i; 
            i++; 
        }
        printf("The factorial of %d is %d\n", num, factorial);
    }
    
    return 0;
}

