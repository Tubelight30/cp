#include <bits/stdc++.h>
using namespace std;
#define int long long int
struct ranges
{
    int l, r, idx;
    // Overloads the < operator for sorting
    bool operator<(const ranges &other) const
    {
        // If left ends are equal, the range with larger
        // right end comes first
        if (l == other.l)
            return r > other.r;
        // Otherwise, the range with smaller left end comes
        // first
        return l < other.l;
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<int> contained(n, 0);
    vector<int> contains(n, 0);
    vector<ranges> range(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        range[i].l = a;
        range[i].r = b;
        range[i].idx = i;
    }

    sort(range.begin(), range.end());
    int maxend = 0;
    for (int i = 0; i < n; i++)
    {
        if (range[i].r <= maxend)
        {
            contained[range[i].idx] = 1;
        }
        maxend = max(maxend,range[i].r);
    }

    int minend = 2e9;
    for (int i = n - 1; i >= 0; i--)
    {
        if (range[i].r >= minend)
        {
            contains[range[i].idx] = 1;
        }
        minend = min(minend, range[i].r);
    }
    for (auto i : contains)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : contained)
    {
        cout << i << " ";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}