#include<stdio.h>

int main () {

    float costPrice, sellingPrice, profit, loss;

    printf("Enter the cost price of the item : ");
    scanf("%f", &costPrice);
    
    printf("Enter the selling price of the item : ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) 
    {
        profit = sellingPrice - costPrice; // Profit calculation
        printf("Profit = %.2f\n", profit);
    } else if (sellingPrice < costPrice) 
    {
        loss = costPrice - sellingPrice;  // Loss calculation
        printf("Loss = %.2f\n", loss);
    } else 
    {
        printf("No profit or loss\n");
    }

    return 0;

}