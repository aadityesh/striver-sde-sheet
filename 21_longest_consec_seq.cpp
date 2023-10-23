#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        a.push_back(elem);
    }

    sort(a.begin(), a.end());

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    int cnt = 1;
    int prev = 1;
    for (int i = 0; i < n; i++)
    {
        if ((a[i + 1] - a[i]) == 1)
        {
            prev++;
        }
        else
        {
            cnt = max(prev, cnt);
            prev = 1;
        }
    }

    if (cnt == 1)
        cnt = 0;

    if (cnt == 1)
        cnt = 0;

    cout << "ans: " << cnt << endl;

    return 0;
}