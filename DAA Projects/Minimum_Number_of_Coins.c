#include <stdio.h>
#include <math.h>
#include <limits.h>

int min_coins(int coins[], int n, int amount)
{
    int dp[amount + 1];
    dp[0] = 0;

    for (int i = 1; i <= amount; i++)
    {
        dp[i] = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX)
            {
                dp[i] = fmin(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main()
{
    int n;
    printf("Enter the Number of Coins\n");
    scanf("%d", &n);
    int coins[n];
    printf("Enter the Coins\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &coins[i]);
    }
    int amount;
    printf("Enter the Amount\n");
    scanf("%d", &amount);

    int min_num_coins = min_coins(coins, n, amount);

    if (min_num_coins == -1)
    {
        printf("It is not possible to make %d cents.\n", amount);
    }
    else
    {
        printf("The minimum number of coins required to make %d cents is %d.\n", amount, min_num_coins);
    }

    return 0;
}
