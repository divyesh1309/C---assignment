#include<stdio.h>

int main () {

    int marks;

    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks >= 33) {
        printf("You are passed\n");
    } else {
        printf("You are failed\n");
    }

    return 0;

}