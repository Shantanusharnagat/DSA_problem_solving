// This algorithm to find the length of the longest increasing subsequence in an array of n numbers.
// Time Complexity: O(n^2)
// Space Complexity: O(n)
// We make a dp array of size n and initialize it with 1.
//  Then we iterate over the array and for each element we check all the elements before it
//  and if the element is greater than the current element then we update the dp array with the maximum of the current value and dp[j]+1.
//  At the end we return the maximum value in the dp array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    int n = arr.size();
    vector<int> dp(n, 1);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    for (auto i : dp)
    {
        cout << i << ' ';
    }
    return 0;
}