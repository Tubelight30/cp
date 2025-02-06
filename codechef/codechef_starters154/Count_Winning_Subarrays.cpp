#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int zeroc = 0;
        int onec = 0;
        for (int j = i; j < n;j++ )
        {
            if (v[j] == 0)
            {
                zeroc++;
            }
            else
            {
                onec++;
            }
            if (zeroc >= onec)
                continue;
            else
            {
                // v[j] = 1;
                count++;
            }
        }
    }
    cout << count << endl;
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
