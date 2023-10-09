#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    int res = 1;
    string ress = "";
    for (int i = 0; i < n; i++)
    {
        string ans = "";
        int count = 1;
        int j = 1;

        ans += s[i];
        while (i - j >= 0 and i + j < n)
        {
            cout << i << " ";
            if (s[i - j] == s[i + j])
            {
                count += 2;
                ans = s[i - j] + ans + s[i + j];
                j++;
                // ans = ans + s[i + j];
            }
            break;
        }
        if (count >= res)
        {
            ress = ans;
        }
        res = max(count, res);
    }
    cout << ress;
    return 0;
}
