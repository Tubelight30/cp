#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int minb = INT_MAX;
    int minind = -1;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        if (b[i] < minb)
        {
            minb = b[i];
            minind = i;
        }
    }
    vector<int> temp(m);
    for (int i = minind; i < m; i++)
    {
        temp[i - minind] = b[i];
    }
    for (int i = 0; i < minind; i++)
    {
        temp[i + (m - minind)] = b[i];
    }

    for (int i = 0; i < m; i++)
    {
        
    }
    for (int i = 0; i <= n - m; i++)
    {
        bool doit = false;
        for (int j = 0; j < m; j++)
        {
            if (temp[j] < a[i + j])
            {
                doit = true;
                break;
            }
            else if (temp[j] > a[i + j])
            {
                break;
            }
        }
        if (doit)
        {
            for (int j = 0; j < m; j++)
            {
                a[i + j] = temp[j];
            }
        }
    }
    for (auto e : a)
    {
        cout << e << " ";
    }
    cout << endl;
    //
    // string t = "";
    // for(int i = 0;i<m;i++){
    //     t+=to_string(temp[i]);
    // }
    // for(int i = 0;i<=n-m;i++){
    //     if(s.substr(i,m)>t){
    //         s.replace(i,m,t);
    //     }
    // }
    // for(auto e:s){
    //     cout<<e<<" ";
    // }
    // cout<<endl;
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