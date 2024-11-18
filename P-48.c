#include<stdio.h>

int main () {

    int maths, physics, chemistry;
    int total, totalMathsPhysics;

    printf("Enter marks in Mathematics : ");
    scanf("%d", &maths);

    printf("Enter marks in Physics : ");
    scanf("%d", &physics);
    
    printf("Enter marks in Chemistry : ");
    scanf("%d", &chemistry);

    // Calculate the total marks 
    total = maths + physics + chemistry;
    //Calculate the total of Maths and Physics
    totalMathsPhysics = maths + physics;

    // Check eligibility based on the criteria
    if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) || totalMathsPhysics >= 140) {
        printf("The candidate is eligible\n");
    } else {
        printf("The candidate is not eligible\n");
    }

    return 0;

}