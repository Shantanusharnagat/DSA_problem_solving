#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1, vector<int>());

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    vector<bool> vis(n + 1, false);
    vector<int> road;
    queue<int> q;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            road.push_back(i);
            count += 1;
            q.push(i);
            vis[i] = true;
            while (!q.empty())
            {
                int ind = q.front();
                q.pop();

                for (int j = 0; j < graph[ind].size(); j++)
                {
                    if (!vis[graph[ind][j]]) // Use "!" to check if it's not visited
                    {
                        q.push(graph[ind][j]);
                        vis[graph[ind][j]] = true;
                    }
                }
            }
        }
    }

    cout << count - 1 << endl;

    for (int i = 0; i < road.size() - 1; i++)
    {
        cout << road[i] << " " << road[i + 1] << endl;
    }

    return 0;
}
