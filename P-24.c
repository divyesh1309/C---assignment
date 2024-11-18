#include<stdio.h>

int main() {

    float salary1, salary2, salary3, salary4, salary5, average,totalSalary;
    char nm1[10], nm2[10], nm3[10], nm4[10], nm5[10];

    printf("Enter 5 Employees Name and Salary");
    printf("\nEmploye Name 1 : ");
    scanf("%s",&nm1);
    printf("Enter Salary : ");
    scanf("%f",&salary1);

    printf("\nEmploye Name 2 : ");
    scanf("%s",&nm2);
    printf("Enter Salary : ");
    scanf("%f",&salary2);

printf("\nEmploye Name 3 : ");
    scanf("%s",&nm3);
    printf("Enter Salary : ");
    scanf("%f",&salary3);

printf("\nEmploye Name 4 : ");
    scanf("%s", &nm4);
    printf("Enter salary : ");
    scanf("%f", &salary4);

printf("\nEmploye Name 5 : ");
    scanf("%s", &nm5);
    printf("Enter salary : ");
    scanf("%f", &salary5);

    totalSalary=salary1+salary2+salary3+salary4+salary5;
    average=totalSalary/5;

    printf("\nAverage salary is : %.2f",average);
    printf("\nTotal Salary of 5 Employees is : %.2f",totalSalary);

return 0;

}