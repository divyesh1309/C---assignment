#include<stdio.h>

int main () {

        for (int  i = 1; i <= 6 ; i++)
        {
          int j = 0;

             while (j<i)
         {
               printf("* ");
               j++;
         }
             printf("\n");
            
        }
        for (int i = 5; i > 0; i--)
        {
            for (int j = 0 ; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        
    return 0;
    
}