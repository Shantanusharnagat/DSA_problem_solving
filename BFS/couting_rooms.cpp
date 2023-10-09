#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;
    vector<vector<char>> grid(m, vector<char>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << grid[i][j];
    //     }
    //     cout << endl;
    // }
    int count = 0;
    int dirx[4] = {0, 1, 0, -1};
    int diry[4] = {1, 0, -1, 0};
    queue<pair<int, int>> q;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '.')
            {
                count += 1;
                q.push({i, j});
                while (!q.empty())
                {
                    int r = q.front().first;
                    int c = q.front().second;
                    grid[r][c] = '#';
                    q.pop();
                    for (int k = 0; k < 4; k++)
                    {
                        int row = r + dirx[k];
                        int col = c + diry[k];

                        if (row < 0 or col < 0 or row >= m or col >= n or grid[row][col] != '.')
                            continue;
                        q.push({row, col});
                        grid[row][col] = '#';
                    }
                }
            }
        }
    }
    cout << count;

    return 0;
}