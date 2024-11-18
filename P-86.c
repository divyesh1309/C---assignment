#include <stdio.h>

int main() {

    int n, i;
    double sum = 0;

    printf("Enter the number of terms : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        double term = (double)i / (i + 1);
        if (i % 2 == 0)
        {
            sum -= term;
        }
        else
        {
            sum += term;
        }
    }

    printf("Sum is : %.2f\n", sum);
    
    return 0;
}
