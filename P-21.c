#include<stdio.h>

int main () {

    int num1, num2, swap;

    printf("Enter Number1 : ");
    scanf("%d",&num1);
    printf("Enter Number2 : ");
    scanf("%d",&num2);

    printf("Enter number ");
    printf("\nNumber 1 = %d\nNumber 2 = %d\n",num1,num2);

    printf("Number Swapd with 3rd variable");
    swap=num1;
    num1=num2;
    num2=swap;
    printf("\nNumber 1 = %d\nNumber 2 = %d",num1,num2);

    printf("\nNumber Swapd without 3rd variable");
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nNumber 1 = %d\nNumber 2 = %d",num1,num2);

    return 0;

}
