#include<stdio.h>

int main () {

     int num, limit;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Enter the limit : ");
    scanf("%d", &limit);

    printf("Multiplication Table of %d up to %d :\n", num, limit);

    //for table
    for (int i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}