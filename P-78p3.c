#include<stdio.h>

int main () {

    int counter = 1;

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 4; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j < (i + i); j++)
        {
            printf("*");
        }
        printf("\n");
        counter++;
    }
}