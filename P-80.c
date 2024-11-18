#include <stdio.h>

int main() {
    int start = 41;  
    int rows = 5;    // Number of rows 
   
    for (int i = 0; i < rows; i++) 
    {
        
        for (int j = start; j < start + 10; j++) 
        {
            printf("%d ", j); 
        }
        
        printf("\n");  // Move to the next line
        start += 10; 
    }

    return 0;
}
