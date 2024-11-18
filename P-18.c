#include <stdio.h>

int main() {

    float monthly_salary, annual_salary;

    printf("Enter the person's monthly salary : ");
    scanf("%f", &monthly_salary);

    // Calculate annual salary
    annual_salary = monthly_salary * 12;

    //output
    printf("The annual salary is: %.0f\n", annual_salary);

    return 0;

}
