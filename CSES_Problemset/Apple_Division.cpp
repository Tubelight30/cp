#include <bits/stdc++.h>
using namespace std;
#define int long long int
//normal code of min subset sum difference with dp will not work as the dp table will be very large
//! use bitmasking to generate all subsets
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int diff = LLONG_MAX;
    for (int i = 0; i < (1 << n); i++)
    {
        // Loop through all elements of the input array
        int subsum = 0;
        for (int j = 0; j < n; j++)
        {
            // Check if the jth bit is set in the current subset
            if ((i & (1 << j)) != 0)
            {
                subsum += v[j];
            }
        }
        diff = min(diff, abs((sum - 2 * subsum)));
        // cout << endl;
    }

    //   vector<vector<bool>> dp(n+1,vector<bool>(sum/2+1));
    //   subsum(dp,v,n,sum/2+1);
    cout << diff << endl;
}

int32_t main()
{
    solve();
    return 0;
}