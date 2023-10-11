#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n + 1, vector<int>());
    int costs[5000][5000];
    for (int i = 0; i < m; i++)
    {
        int x, y, cost;
        cin >> x >> y >> cost;
        v[x].push_back(y);
        // v[y].push_back(x);
        costs[x][y] = cost;
        // costs[y][x]=cost;
    }
    queue<pair<int, int>> q;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
    }

    return 0;
}