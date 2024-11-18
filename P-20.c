#include<stdio.h>

int main () {

    float monthly_salary, insurance, loan, remaining_salary;

    printf("Enter your monthly salary : ");
    scanf("%f", &monthly_salary);

    // Calculate 10% insurance premium
    insurance = monthly_salary * 0.10;

    // Calculate 10% loan installment
    loan = monthly_salary * 0.10;

    // Calculate remaining salary after deductions
    remaining_salary = monthly_salary - (insurance + loan);

    //output
    printf("Insurance Deduction : %.2f\n", insurance);
    printf("Loan Deduction : %.2f\n", loan);
    printf("Remaining Salary : %.2f\n", remaining_salary);


    return 0;


}