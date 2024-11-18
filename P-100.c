#include<stdio.h>

int main()
{
    int num[5];

    for (int i = 0; i < 5; i++)
    {
            printf("\nEnter number %d : ",i+1);
            scanf("%d",&num[i]);
        if(num[i]%2==0)
        {
            printf("%d is Even Number\n",num[i]);
        }
        else
        {
            printf("%d is Odd Number\n",num[i]);
        }
    }
return 0;
}