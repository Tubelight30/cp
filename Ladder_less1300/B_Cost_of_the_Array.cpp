#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (k == n)
    {
        for (int i = 1; i < n; i += 2)
        {
            if (v[i] != (i + 1) / 2)
            {
                cout << (i + 1) / 2 << endl;
                return;
            }
        }
        cout << k/2 + 1 << endl;
        return;
    }

    for (int i = 1; i <= n - k + 1; i++)
    {
        if (v[i] != 1)
        {
            cout << "1\n";
            return;
        }
    }
    cout<<2<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}