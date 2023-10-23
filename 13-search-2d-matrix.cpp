#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";

    // brute

    /*
    int rows = mat.size();
    int cols = mat[0].size();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == target)
                return true;
        }
    }

    return false;
    */

    // better

    /*for (int i = 0; i < n; i++)
    {
        if (a[i][0] <= target && target <= a[i][m - 1])
            binarySeach(mat[i], k);
    }*/

    // optimal

    /*
    int low = 0;
    int high = (n * m) - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;

        if (a[row][col] == k)
            return true;
        else if (a[row][col] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }*/

    return 0;
}