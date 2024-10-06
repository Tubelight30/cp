#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (a == 0 || b == 0)
    {
        cout << "NO" << endl;
        return;
    }
    if ((a + b) % 3 == 0)
    {
        if (2 * a >= b && 2 * b >= a)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int32_t main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}