#include<stdio.h>

int main () {

    int rows = 5; 
  
    for (int i = 1; i <= rows; i++) {
       
        for (int j = (i - 1) * 10 + 1; j <= i * 10; j++)
        {
            printf("%02d ", j);
        }
        printf("\n"); 
    }

    return 0;

}