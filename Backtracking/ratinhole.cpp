// we make use of backtracking to solve this problem
// we start from the first letter of the word and check if it is present in the board
// we go in all 4 directions and update the path
// we maintain a visited array to keep track of the visited cells

#include <bits/stdc++.h>
using namespace std;
bool issafe(int x, int y, vector<vector<bool>> vis, vector<vector<int>> arr, int n)
{
    if (x >= 0 and x < n and y >= 0 and y < n and vis[x][y] != 1 and arr[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(int x, int y, vector<string> &ans, vector<vector<bool>> &vis, int n, string path, vector<vector<int>> &arr)
{
    if (x == n - 1 and y == n - 1)
    {
        ans.push_back(path);
        return;
    }
    // 4 motions
    // down
    if (issafe(x + 1, y, vis, arr, n))
    {
        vis[x][y] = 1;
        solve(x + 1, y, ans, vis, n, path + 'D', arr);
    }
    if (issafe(x, y - 1, vis, arr, n))
    {
        vis[x][y] = 1;
        solve(x, y - 1, ans, vis, n, path + 'L', arr);
    }
    if (issafe(x, y + 1, vis, arr, n))
    {
        vis[x][y] = 1;
        solve(x, y + 1, ans, vis, n, path + 'R', arr);
    }
    if (issafe(x - 1, y, vis, arr, n))
    {
        vis[x][y] = 1;
        solve(x - 1, y, ans, vis, n, path + 'U', arr);
    }
    vis[x][y] = 0;
}

vector<string> searchMaze(vector<vector<int>> &arr, int n)
{
    vector<string> ans;
    if (arr[0][0] == 0)
    {
        return ans;
    }
    vector<vector<bool>> vis(n, vector<bool>(n, 0));
    string path;
    solve(0, 0, ans, vis, n, path, arr);
    return ans;
}
