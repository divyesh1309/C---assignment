#include <stdio.h>

int main() {

    char operator;
    float num1, num2, result;

    printf("Enter first number : ");
    scanf("%f", &num1);

    printf("Enter second number : ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  

    //use if else 
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    } 
    else if (operator == '-') {
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        } else {
            printf("Error Division by zero is not allowed.\n");
        }
    } else if (operator == '%') {
        if ((int)num2 != 0) {
            result = (int)num1 % (int)num2;
            printf("%d %% %d = %.0lf\n", (int)num1, (int)num2, result);
        } else {
            printf("Error Modulo by zero is not allowed.\n");
        }
    } else {
        printf("Error your operator is wrong\n");
    }

    return 0;

}
