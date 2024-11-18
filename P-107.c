#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter String : ");
    gets(str);
    strrev(str);

    for (int i = 0; str[i]!='\0'; i++)
    {
        printf("%c, ",str[i]);
    }

    return 0;
}