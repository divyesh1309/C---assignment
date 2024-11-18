#include<stdio.h>

void numin();
int Addition();
int Subtraction();
int Multiplication();
int Division();

    int num1,num2;

int main()  {

    int n;

    do
    {
        printf("\n========>>Calculator<<========");

        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Division");
        printf("\n4. Multiplication");
        printf("\n5. Exit");

        printf("\n\tChoose your option : ");
        scanf(" %d",&n);

        if(n==5)
        {
            break;
        }
        switch (n)
        {
        case 1:
            printf("\n\t=> Addition is : %d",Addition());
            break;
        case 2:
            printf("\n\t=> Subtraction is : %d",Subtraction());
            break;
        case 3:
            printf("\n\t==> Multiplication is : %d",Multiplication());
            break;
        case 4:
            printf("\n\t=> Division is : %d",Division());
            break;

        default:
            printf("\n Wrong input!");
            break;
        }
        
    } while (1);
    
return 0;
}

void numin()
{
    printf("Enter Number 1 : " );
    scanf(" %d",&num1);
    printf("Enter Number 2 : ");
    scanf(" %d",&num2);
}

int Addition()
{   
    int result;
    numin();
    result=num1+num2;
    return result;
}
int Subtraction()
{   
    int result;
    numin();
    result=num1-num2;
    return result;
}
int Multiplication()
{   
    int result;
    numin();
    result=num1*num2;
    return result;
}
int Division()
{   
    int result;
    numin();
    result=num1/num2;
    return result;
}
