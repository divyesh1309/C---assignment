#include<stdio.h>

int main () {

    int minutes;
    int seconds;
    float hours;

    printf("Enter the number of minutes : ");
    scanf("%d", &minutes);

    //convert Minutes into seconds 
    seconds = minutes * 60;

    //convert Minutes into hours 
    hours = minutes / 60.0;

    //output
    printf("%d minutes is approximately %d seconds and %.2f hours.\n", minutes, seconds, hours);


    return 0;


}