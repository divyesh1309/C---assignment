#include<stdio.h>
void revstr(char *);

int main()
{
    char str[50];
    printf("Enter string : ");
    gets(str);
    revstr(str);
    
return 0;
}

void revstr(char *str2)
{
    //condition work
    if(*str2)
    {
        revstr(str2+1);
        printf("%c",*str2);
    }
    
}