#include <stdio.h>
#include <string.h>

int main() 
{
    char string1[50], string2[50];
    int result, str1len=0, str2len=0;

    printf("Enter the first string : ");
    gets(string1);

    printf("Enter the second string : ");
    gets(string2);

    for (int i = 0; string1[i]!='\0'; i++)
    {
        str1len++;
    }
    for (int i = 0; string2[i]!='\0'; i++)
    {
        str2len++;
    }
    result=str1len-str2len;
    if (result < 0)
    {
        printf("The first string is less than the second string\n");
    }
    else if (result > 0)
    {
        printf("The first string is greater than the second string\n");
    }
    else
    {
        printf("Both strings are equal\n");
    }

    return 0;

}