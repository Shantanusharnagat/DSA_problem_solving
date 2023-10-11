#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    vector<int> contained(n, 0);
    vector<int> containing(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                // Check if range i contains range j
                if (v[i].first <= v[j].first && v[i].second >= v[j].second)
                {
                    contained[i]++;
                }
                // Check if range j contains range i
                if (v[j].first <= v[i].first && v[j].second >= v[i].second)
                {
                    containing[i]++;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << contained[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << containing[i] << " ";
    }

    return 0;
}
