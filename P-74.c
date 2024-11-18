#include<stdio.h>

int main () {

    int number, sum = 0, count = 1;

    printf("Enter 10 numbers to calculate the sum : \n");
    
    while (count <= 10) {
        printf("Enter number %d : ", count);
        scanf("%d", &number);
        
        sum += number; 
        
        count++; 
    }
    
    //output
    printf("The sum of the 10 numbers is : %d\n", sum);

    return 0;

}