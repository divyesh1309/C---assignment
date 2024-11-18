#include<stdio.h>

struct employee
{
  int empno;
  char empname[20];
  char address[100];
  int age;
};

void multiEmployee()                                                    
{
    struct employee emp[5];
  for (int i = 0; i < 5; i++)
  {
    emp[i].empno = i + 1;
    printf("Employee no.: %d",emp[i].empno);
    printf("\nEnter Employee name: ");
    scanf("   %s", &emp[i].empname);

    printf("Enter Address: ");
    scanf("    %s", &emp[i].address);
    
    printf("Enter Employee age: ");
    scanf("%d", &emp[i].age);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("\nEmployee no.: %d", emp[i].empno);
    printf("\nEmployee Name : %s", emp[i].empname);
    printf("\nage : %d", emp[i].age);
    printf("\naddress : %s", emp[i].address);
    printf("\n========");
  }
}

int main()
{
    //employee_1();
    multiEmployee();
return 0;
}