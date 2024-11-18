#include <stdio.h>

int main() {

    int m, result;

    printf("Enter an integer value for m : ");
    scanf("%d", &m);

    if (m > 0) {
        result = 1;
    } else if (m == 0) {
        result = 0;
    } else {
        result = -1;
    }

    //output
    printf("The value of m is : %d\n", result);


    return 0;

}

