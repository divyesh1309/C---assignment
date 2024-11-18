#include <stdio.h>
#include <math.h>

int main() {

    int num, sum = 0, temp, remainder, n = 0;
    
    printf("Enter an integer : ");
    scanf("%d", &num);
    
    temp = num;
    
    // Find the number of digits in the given number
    while (temp != 0) {
        temp /= 10;
        ++n;
    }
    
    temp = num;
    
    // Calculate the sum of each digit raised to the power of n
    for (int i = 0; i < n; i++) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    
    // Check the number is an Armstrong number
    if (sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
    
    return 0;
}
