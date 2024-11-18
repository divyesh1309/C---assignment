#include <stdio.h>

int main() {
    char character;

    printf("Enter a character : ");
    scanf("%c", &character);

    // Print ASCII value of the character
    printf("ASCII value of %c is: %d\n", character, character);

    return 0;
}
