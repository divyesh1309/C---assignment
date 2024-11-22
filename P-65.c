#include<stdio.h>

int main () {

    int n, N1 = 0, N2 = 1, N3, i;        //(n - use se input lega)   , (N3 - next turm ko calculate karega ) , (i - for loop )

    printf("Enter the number of terms : ");
    scanf("%d", &n);

    printf("Fibonacci Series : ");      

    for (i = 1; i <= n; ++i)     // i = 1 se leke user jo number (n) dega vaha tuk chalega 
    {
        printf("%d ", N1);

        //Calculate
        N3 = N1 + N2;         // next term calculate karo
        N1 = N2;              // value update hoga
        N2 = N3;              // Next term, current term banega
     
    }

    return 0;

}