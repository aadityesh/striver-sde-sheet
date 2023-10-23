#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // brute (for loops)
    /*
    int miss = -1;
    int repeat = -1;

    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == i)
                cnt++;
            if (cnt == 2)
                repeat = i;
        }

        if (repeat != -1 && miss != -1)
            break;

        if (cnt == 0)
            miss = i;
    }

    cout << "miss: " << miss << " "
         << "repeat: " << repeat << endl;
    */

    // better (hashing)
    /*
        int hash[n + 1] = {0};
        for (int i = 0; i < n; i++)
            hash[a[i]]++;

        int miss = -1;
        int repeat = -1;
        for (int i = 1; i < n + 1; i++)
        {
            if (hash[i] == 2)
                repeat = i;
            if (hash[i] == 0)
                miss = i;
        }

        cout << "miss: " << miss << " "
             << "repeat: " << repeat << endl;
    */

    // Optimal (Maths)

    /*
        long long Sn = (n * (n + 1)) / 2;
        long long S2n = (n * (n + 1) * (2 * n + 1)) / 6;

        long long Sarr = 0;
        long long S2arr = 0;

        for (int i = 0; i < n; i++)
        {
            Sarr += a[i];
            S2arr += (a[i] * a[i]);
        }

        int eq1 = Sarr - Sn;
        int eq2 = S2arr - S2n;
        eq2 = eq2 / eq1;

        int val1 = (eq1 + eq2) / 2;
        int val2 = eq2 - val1;

        cout << "repeat: " << val1 << " "
             << "miss: " << val2 << endl;
             */

    return 0;
}