#include <bits/stdc++.h>
using namespace std;
// optimal
int mergeSort(vector<int> &a, int l, int m, int h)
{
    int left = l;
    int right = m + 1;
    vector<int> temp;
    int cnt = 0;
    while (left <= m && right <= h)
    {
        if (a[left] <= a[right])
        {
            temp.push_back(a[left]);
            left++;
        }

        else
        {
            cnt += (m - l) + 1;
            temp.push_back(a[right]);
            right++;
        }
    }

    while (left <= m)
    {
        temp.push_back(a[left]);
        left++;
    }

    while (right <= h)
    {
        temp.push_back(a[right]);
        right++;
    }

    // int x = 0;
    for (int i = l; i <= h; i++)
    {
        a[i] = temp[i - l];
        // x++;
    }

    return cnt;
}
int merge(vector<int> &a, int l, int h)
{
    int cnt = 0;
    if (l >= h)
        return cnt;

    int mid = (l + h) / 2;

    cnt += merge(a, l, mid);
    cnt += merge(a, mid + 1, h);
    cnt += mergeSort(a, l, mid, h);
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a = {5, 4, 3, 2, 1};

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << merge(a, 0, n - 1) << endl;
    ;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    // brute

    /*
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                cnt++;
        }
    }
    cout << "Cnt: " << cnt << endl;
*/

    return 0;
}