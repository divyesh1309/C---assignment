#include <stdio.h>

int main() {

    int num, i; 
    
    printf("Enter 5 numbers : \n");

    for (i = 1; i <= 5; i++) {
        printf("Enter number %d : ", i);
        scanf("%d", &num);  
    }
    printf("number : %d\n", num);

    return 0;
}
