class Solution
{
public:
    int findCircleNum(vector<vector<int>> &nums)
    {
        stack<int> st;
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i][j] == 1 and j != i)
                {
                    mp[i].push_back(j);
                }
            }
        }
        int count = 0;
        vector<bool> vis(nums.size(), false);

        for (int i = 0; i < nums.size(); i++)
        {
            if (!vis[i])
            {
                count += 1;
            }
            if (mp.find(i) != mp.end())
            {
                st.push(i);
                vis[i] = true;
                while (!st.empty())
                {
                    int cur = st.top();
                    st.pop();
                    for (int j = 0; j < mp[cur].size(); j++)
                    {
                        if (!vis[mp[cur][j]])
                        {
                            st.push(mp[cur][j]);
                            vis[mp[cur][j]] = true;
                        }
                    }
                }
            }
        }
        return count;
    }
};