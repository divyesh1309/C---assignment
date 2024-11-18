#include<stdio.h>

int main () {

    int n, N1 = 0, N2 = 1, N3, i;

    printf("Enter the number of terms : ");
    scanf("%d", &n);

    printf("Fibonacci Series : ");

    for (i = 1; i <= n; ++i) {
        printf("%d ", N1);

        //Calculate
        N3 = N1 + N2;
        N1 = N2;
        N2 = N3;
    }

    return 0;

}