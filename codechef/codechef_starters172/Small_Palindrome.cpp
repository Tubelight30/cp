#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int x, y;
    cin >> x >> y;
    if (x == 0)
    {
        string s = "";
        for (int i = 0; i < y; i++)
        {
            s += "2";
        }
        cout << s << endl;
        return;
    }
    if (y == 0)
    {
        string s = "";
        for (int i = 0; i < x; i++)
        {
            s += "1";
        }
        cout << s << endl;
        return;
    }

    int midx = x / 2;
    string ans = "";
    for (int i = 0; i < midx; i++)
    {
        ans += "1";
    }
    for (int i = 0; i < y; i++)
    {
        ans += "2";
    }
    for (int i = 0; i < midx; i++)
    {
        ans += "1";
    }
    cout<<ans<<endl;
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