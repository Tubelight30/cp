#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b;
    cin >> b;
    if (a.size() == 1)
    {
        cout << "YES" << endl;
        return;
    }
    // a[0] = b - a[0];
    if (b - a[0] < a[0]){
        a[0] = b-a[0];
    }
    for (int i = 1; i < n; i++)
    {
        int temp  =a[i];
        a[i] = min(b-a[i],a[i]);
        if (a[i]<a[i-1])
        {
            a[i] = max(temp,b-temp);
            if(a[i]<a[i-1]){
                cout<<"NO"<<endl;
                return;
            }
        }
        // else
        // {
        //     if (b - a[i] <= a[i + 1])
        //     {
        //         a[i] = b - a[i];
        //     }
        //     // else if(a[i] <= b-a[i+1]){
        //     //     a[i+1] = b-a[i+1];
        //     // }
        //     else
        //     {
        //         cout << "NO" << endl;
        //         return;
        //     }
        // }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int32_t main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}