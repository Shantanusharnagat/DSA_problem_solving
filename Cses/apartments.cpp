#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> applicants(n);
    vector<int> apartments(m);

    for (int i = 0; i < n; i++)
    {
        cin >> applicants[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> apartments[i];
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());
    int j = 0;
    int count = 0;
    for (auto i : apartments)
    {
        if (i - k <= applicants[j] && applicants[j] <= i + k)

        {
            count += 1;
        }
        else
        {
            while (j < n)
            {
                if (i - k <= applicants[j] <= i + k)
                {
                    count += 1;
                    j += 1;
                    break;
                }
                j += 1;
            }
        }
    }
    cout << count;

    return 0;
}