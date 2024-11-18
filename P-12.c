#include<stdio.h>

int main () {

    int students, apples = 5, total_apples;

    printf("Enter the number of students : ");
    scanf("%d", &students);

    // Calculate total apples required
    total_apples = students * apples;

    //output
    printf("Total apples required : %d\n", total_apples);

    return 0;
}
