#include<stdio.h>

int main () {

    int basic_salary;
    float gross_salary,hra,da;

    printf("Enter basic salary : ");
    scanf("%d",&basic_salary);
    
    if (basic_salary<=10000)
    {
        hra=basic_salary*0.2;
        da=basic_salary*0.8;
    }
    else if (basic_salary<=20000)
    {
        hra=basic_salary*0.25;
        da=basic_salary*0.9;
    }
    else if (basic_salary>20000)
    {
        hra=basic_salary*0.3;
        da=basic_salary*0.95;
    }
    
    gross_salary=basic_salary+da+hra;

    printf("\nGross salary is : %.2f",gross_salary);
    

    return 0;

}