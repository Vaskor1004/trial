#include <iostream>
using namespace std;

int main()
{
    int coins[3] = {1, 3, 4};
    int amount = 6;
    int dp[100];
    dp[0] = 0;
    for(int i = 1; i <= amount; i++)
        dp[i] = 1000;
    for(int i = 1; i <= amount; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(coins[j] <= i)
            {
                if(dp[i] > dp[i - coins[j]] + 1)
                {
                    dp[i] = dp[i - coins[j]] + 1;
                }
            }
        }
    }
    cout << "Minimum coins needed: " << dp[amount];
    return 0;
}
