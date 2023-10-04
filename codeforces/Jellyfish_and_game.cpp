#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a;
        vector<int> b;
        int maxa = 0, maxb = 0;
        ll suma = 0, sumb = 0;
        int mina = INT_MAX, minb = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            maxa = max(maxa, x);
            suma += x;
            mina = min(mina, x);
            a.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            maxb = max(maxb, x);
            sumb += x;
            minb = min(minb, x);
            b.push_back(x);
        }
        suma += max(0, maxb - mina);
        if (k % 2 == 1)
        {
            cout << suma << endl;
        }
        else
        {
            int dif = max(maxb, maxa) - min(minb, mina);
            sumb -= dif;
            cout << sumb << endl;
        }
    }
    return 0;
}