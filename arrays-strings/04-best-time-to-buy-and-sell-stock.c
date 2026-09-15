#include <stdio.h>

int maxProfit(int* prices, int pricesSize)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        int currentProfit = prices[i] - minPrice;

        if (currentProfit > maxProfit)
        {
            maxProfit = currentProfit;
        }
    }

    return maxProfit;
}

int main()
{
    int prices[] = {7, 6, 4, 3, 1};
    int size = 5;

    int result = maxProfit(prices, size);

    printf("Maximum profit: %d\n", result);

    return 0;
}