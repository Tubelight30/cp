#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve()
{
    ll left, r;
    cin >> left >> r;
    ll d = 1;
    while (left <= r)
    {
        left = left + d;
        d++;
    }
    cout<<d-1<<endl;
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}