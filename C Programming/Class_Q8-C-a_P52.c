#include <stdio.h>
int main()
{
    float cost, selling, profit, loss;
    printf("Enter Cost Price and Selling price: ");
    scanf("%f%f", &cost, &selling);
    profit = selling - cost;
    loss = cost - selling;
    if (cost > selling)
    {
        printf("\nThe Seller has made loss = %5.2f", loss);
    }

    else
    {
        printf("\nThe Seller has made porfit = %5.2f", profit);
    }
    return 0;
}