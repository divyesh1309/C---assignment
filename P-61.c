#include<stdio.h>
int main()
{
    int num[5], i;    //array use hoga 

    for (int i = 0; i < 5; i++)      //1st loop user se number input lene ke liye 
    {
        printf("Enter number : ");
        scanf("%d",&num[i]);
    }

    //output 
    printf("all number : ");
    for (i = 0; i < 5; i++)      //2nd loop sare number ko ek sath print karega 
    {
        printf("%d ", num[i]);  
    }
    
return 0;
}