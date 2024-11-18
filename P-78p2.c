#include<stdio.h>

int main () {

    int counter = 65;  //for capital

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", counter);
            counter++;
        }
        printf("\n");
    }

    return 0;

    
    
}