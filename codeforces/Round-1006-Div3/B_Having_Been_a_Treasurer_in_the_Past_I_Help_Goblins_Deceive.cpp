#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n <= 2)
    {
        cout << 0 << endl;
        return;
    }
    int dash = 0;
    int under = 0;
    for (auto ele : s)
    {
        if (ele == '-')
            dash++;
        else
            under++;
    }
    if (dash < 2 || under < 1)
    {
        cout << 0 << endl;
        return;
    }
    int left = dash / 2;
    int right = dash - left;
    int ans = under * left * right;
    cout << ans << endl;
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