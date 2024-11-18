#include<stdio.h>
#include<string.h>

int main()
{
    char string[50],cpystring[50];
    printf("Enter String : ");
    gets(string);
    strcpy(cpystring,string);
    
    printf("Enterd string is : %s\n",string);
    printf("Copy of string :  %s",cpystring);

return 0;
}