#include <stdio.h>

int main() {

    int height;

    printf("Enter your height in centimeters : ");
    scanf("%d", &height);

    if (height < 150) {
        printf("You are short categorized\n");
    } else if (height >= 150 && height <= 180) {
        printf("You are Average categorized\n");
    } else {
        printf("You are Tall categorized\n");
    }

    return 0;
}
