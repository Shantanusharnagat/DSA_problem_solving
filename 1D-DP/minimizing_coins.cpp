#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> dp(x + 1, x + 1);
    dp[0] = 0;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= arr[j])
            {
                dp[i] = min(dp[i], 1 + dp[i - arr[j]]);
            }
        }
    }
    if (dp[x] == x + 1)
    {
        cout << -1;
    }
    else
    {
        cout << dp[x];
    }

    return 0;
}