#include<stdio.h>

int main () {

    int a=65;
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ",a+j);
            
        }
        printf("\n");
    }
    
}