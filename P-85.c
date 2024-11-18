#include <stdio.h>

int main() {
    
    int n, i, j, sum = 0, total;

    printf("Enter the number of terms : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum = sum + j;
        }
        total += sum;
    }
    printf("Sum is : %d", sum);
    
    return 0;
}
