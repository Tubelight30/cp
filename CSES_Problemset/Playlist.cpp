#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    int left = 0;
    int right = 0;
    int count = INT_MIN;
    map<int, int> mp;
    for (right = 0; right < n; right++)
    {
        int temp;
        cin >> temp;
        // mp[v[right]]++;
        if (mp.find(temp) != mp.end() && mp[temp] >= left)
        //! use map instead of unordered_map as map has avg complexity of O(log n) for .find()
        {
            left = mp[temp] + 1;
        }
        mp[temp] = right;
        // mp[v[right]] = 1;
        count = max(count, right - left + 1);
    }

    cout << count << endl;
}

int32_t main()
{
    solve();
    return 0;
}