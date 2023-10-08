// Minimizing Coins
//  Time Complexity: O(n)
// make a dp array of size n+1
// dp[0]=1
// for i=1 to n
//  iterate over all the dice values
//  if i>=j
//  dp[i] will be dp[i]+dp[i-j] as we can reach i from i-j by adding j

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dp[n + 1];
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = 0;
        for (int j = 1; j <= 6; j++)
        {
            if (i >= j)
            {
                dp[i] = (dp[i] + dp[i - j]) % 1000000007;
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}