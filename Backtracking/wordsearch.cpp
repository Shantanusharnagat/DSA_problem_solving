#include <bits/stdc++.h>
using namespace std;

// we make use of backtracking to solve this problem
// we start from the first letter of the word and check if it is present in the board
// if it is present then we check for the next letter in the word in the adjacent cells
// if the next letter is present in the adjacent cells then we move to that cell and check for the next letter
// if the next letter is not present in the adjacent cells then we backtrack and check for the next adjacent cell
// make sure to learn the directions

class Solution
{
public:
    bool solve(int i, int j, vector<vector<char>> &board, string word, int ind, int m, int n)
    {
        if (ind >= word.size())
            return true;
        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] == '.' || board[i][j] != word[ind])
        {
            return false;
        }
        if (word.size() == 1 and board[i][j] == word[0])
            return true;
        board[i][j] = '.';
        bool temp = false;
        int dirx[4] = {0, 1, 0, -1};
        int diry[4] = {1, 0, -1, 0};
        for (int index = 0; index < 4; index++)
        {
            temp = temp || solve(i + dirx[index], j + diry[index], board, word, ind + 1, m, n);
        }
        board[i][j] = word[ind];
        return temp;
    }

    bool exist(vector<vector<char>> &board, string word)
    {
        int m = board.size();
        int n = board[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == word[0])
                {
                    if (solve(i, j, board, word, 0, m, n))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
