#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    vector<int> arr = {1, 5, 3, 2, 6, 8, 8, 2, 7};

    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);
    }
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}