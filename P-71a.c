#include <stdio.h>
#include <math.h>

int main() {

    int num, sum = 0, temp, remainder, n = 0;
    
    printf("Enter an integer : ");
    scanf("%d", &num);
    
    temp = num;
    
    // Find the number of digits in the given number
    while (temp != 0) {    //while loop ka use karke har digit ko 10 se divide karte hain 
        temp /= 10;
        ++n;               //n ka increment hoga
    }
    
    temp = num;
    
    // Calculate the sum of each digit raised to the power of n
    for (int i = 0; i < n; i++)
     {
        remainder = temp % 10;         //last digit find kar ke 
        sum += pow(remainder, n);      //Digit ka power n ke equal calculate karke sum me add karege
        temp /= 10;                         
    }
    
    // Check the number is an Armstrong number
    if (sum == num)
        printf("%d is an Armstrong number\n", num);   //sum original number ke equal ho to vo Armstrong number he
    else
        printf("%d is not an Armstrong number\n", num);
    
    return 0;
}
