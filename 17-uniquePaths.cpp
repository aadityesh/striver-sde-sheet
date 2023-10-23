#include <bits/stdc++.h>
using namespace std;

/*

int CountPaths(int i, int j, int r, int c)
{
    if (i == r - 1 && j == c - 1)
        return 1;
    if (i >= r || j >= c)
        return 0;

    return CountPaths(i + 1, j, r, c) + CountPaths(i, j + 1, r, c);
}

*/

// better

/*
int countPaths(int i, int j, int r, int c, vector<vector<int>> &dp)
{
    // int dp[r][c] = {-1};

    if (i == r - 1 && j == c - 1)
        return 1;
    if (i >= r || j >= c)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];
    else
    {
        dp[i][j] = countPaths(i + 1, j, r, c, dp) + countPaths(i, j + 1, r, c, dp);
        return dp[i][j];
    }
};
*/
int countPaths(int n, int m)
{
    int N = n + m - 2;
    int r = m - 1;
    int res = 1;

    for (int i = 1; i <= r; i++)
    {
        res *= (N - r + i) / i;
    }

    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }

    // cout << CountPaths(0, 0, n, m) << endl;

    vector<vector<int>> dp;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp(m, -1);
        dp.push_back(temp);
    }

    for (auto i : dp)
    {
        for (auto j : i)
            cout << j << " ";

        cout << endl;
    }

    cout << countPaths(0, 0, n, m, dp) << endl;

    for (auto i : dp)
    {
        for (auto j : i)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}