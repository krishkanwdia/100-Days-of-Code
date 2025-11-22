#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float profit, loss;
    float profitPercent, lossPercent;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        // Calculate profit and profit percentage
        profit = sellingPrice - costPrice;
        profitPercent = (profit / costPrice) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", profitPercent);
    }
    else if (costPrice > sellingPrice) {
        // Calculate loss and loss percentage
        loss = costPrice - sellingPrice;
        lossPercent = (loss / costPrice) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", lossPercent);
    }
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
