#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t;
    int ind1 = -1;
    for (int i = 0; i < n; i++)
    {
        // v[i] = s[i];
        if (ind1 == -1 && s[i] == '1')
        {
            ind1 = i;
        }
    }
    if (ind1 == -1)
    {
        cout << 0 << endl;
        return;
    }
    int count = 0;
    int posi1 = ind1;
    int posi0 = -1;
    while (true)
    {
        int curr1 = find(s.begin(), s.end(), '1') - s.begin();
        int curr0 = find(t.begin(), t.end(), '0') - t.begin();
        if (curr1 == s.size() && curr0 == t.size())
            break;
        count++;
        if (curr1 != s.size())
        {
            string temp = s.substr(curr1,s.size());
            s = s.substr(0, curr1);
            t = t + temp;
            continue;
        }
        if(curr0 != t.size()){
            string temp = t.substr(curr0);
            t = t.substr(0, curr0);
            s = s + temp;
            continue;
        }
    }
    cout<<count<<endl;
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