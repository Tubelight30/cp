#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int n, x;
    cin >> n >> x;
    if (n == 1)
    {
        cout << x << endl;
        return;
    }
    if (n == 2)
    {
        cout << 0 << " " << x << endl;
        return;
    }
    // if (n >= x)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << i % (x + 1) << " ";
    //     }
    //     cout << endl;
    //     return;
    // }
    if (x % 2 == 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << 0 << " ";
        }
        cout << x << endl;
        return;
    }
    vector<int> ans;
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i | x) == x)
        {
            value|=i;
            ans.push_back(i);
        }
        else{
            ans.push_back(0);
        }
    }
    if(value != x) ans[n-1] = x;
    for(auto ele: ans){
        // value|=ele;
        cout<<ele<<" ";
    }
    cout<<endl;
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