#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double x;
    cin >> n >> x;
    double ans = 1.0;
    // brute
    /*
    for (int i = 0; i < n; i++)
        ans = ans * x;
    cout << ans << endl;
*/

    // optimal
    /*
    double ans = 1.0;
    long long nn = n;

    if (n < 0)
        nn = -1 * nn;

    while (nn)
    {

        if (nn % 2)
        {
            ans = ans * x;
            nn = nn - 1;
        }

        else
        {
            x = x * x;
            nn /= 2;
        }
    }

    if (n < 0)
        ans = (double)1 / (double)ans;

    return ans;*/

    return 0;
}