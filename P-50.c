#include <stdio.h>

int main() {

    float angle1, angle2, angle3;

    printf("Enter the first angle of the triangle : ");
    scanf("%f", &angle1);
    
    printf("Enter the second angle of the triangle : ");
    scanf("%f", &angle2);
    
    printf("Enter the third angle of the triangle : ");
    scanf("%f", &angle3);

    //equal to 180
    if (angle1 + angle2 + angle3 == 180) {
        printf("A triangle can be formed with these angles\n");
    } else {
        printf("A triangle cannot be formed with these angles\n");
    }

    return 0;
}
