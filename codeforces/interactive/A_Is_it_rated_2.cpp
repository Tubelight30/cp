#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    while (true)
    {
        string inp;
        getline(cin,inp);
        if (inp != "Is it rated?")
        {
            return;
        }
        cout << "NO";
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}