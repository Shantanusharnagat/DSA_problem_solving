// wrong answer
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int dp[x + 1];
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        dp[i] = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (i - coins[j] >= 0)
            {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    if (dp[x] == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << dp[x] << endl;
    }
    return 0;
}