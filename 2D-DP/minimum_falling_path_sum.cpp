// Problem Link: https://leetcode.com/problems/minimum-falling-path-sum/
// We solve this problem using bottom up approach
// We start from the second last row and then we add the minimum of the next 3 cells to current cell
// the 3 cells are - diagonally left, directly below and diagonally right

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};
    int m = arr.size();
    int n = arr[0].size();

    for (int i = m - 2; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                arr[i][j] += min(arr[i + 1][j], arr[i + 1][j + 1]);
            }
            else if (j == n - 1)
            {
                arr[i][j] += min(arr[i + 1][j], arr[i + 1][j - 1]);
            }
            else
            {
                arr[i][j] += min(arr[i + 1][j], min(arr[i + 1][j + 1], arr[i + 1][j - 1]));
            }
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, arr[0][i]);
    }
    cout << ans << endl;

    return 0;
}