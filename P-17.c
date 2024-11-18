#include<stdio.h>

int main () {

    float salary, premium;

    printf("Enter the person salary : ");
    scanf("%f", &salary);

    //calculate karna
    premium = salary * 0.12; //10% 

    //outout
    printf("The insurance premium based on a salary of %.2f is : %.2f\n", salary, premium);


    return 0;

    
}