#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    string s;
    cin >> s;
    if (s[0] != '1')
    {
        cout << "NO" << endl;
        return;
    }
    if (s.length() >= 3)
    {
        for (int i = 0; i <= s.length() - 3; i++)
        {
            string temp = s.substr(i,3);
            if (temp == "444")
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '1' && s[i] != '4')
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int32_t main()
{
    solve();
    return 0;
}