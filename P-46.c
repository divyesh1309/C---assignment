#include<stdio.h>

int main () {

     int n1, n2, n3, min;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    min = (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3);

    //output
    printf("The minimum number is : %d\n", min);

    return 0;
}