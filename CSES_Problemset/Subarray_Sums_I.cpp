#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int sum = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    int l = 0;
    int r = 0;
    int currsum = 0;
    int count = 0;
    while (r <= v.size())
    {
        if (currsum == x)
        {
            while (currsum == x && l < r)
            {
                count++;
                currsum = currsum - v[l];
                l++;
                currsum += v[r];
                r++;
            }
        }
        else if (currsum < x)
        {
            currsum += v[r];
            r++;
        }
        else
        {
            while (currsum > x && l<r)
            {
                currsum -= v[l];
                l++;
            }
        }
    }
    cout << count << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}