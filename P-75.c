#include<stdio.h>

int main () {

    int number, sum = 0, count = 1;

    printf("Enter a natural numbers : ");
    scanf("%d", &number);

    while (count <= number) {
        sum += count;  
        count++;       
    }

    //output
    printf("The sum of the first %d natural numbers is: %d\n", number, sum);

    return 0;


}