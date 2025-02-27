#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    int posi = x;
    int sum = 0;
    int zero = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            posi--;
        }
        if (s[i] == 'R')
        {
            posi++;
        }

        if (posi == 0)
        {
            zero = 1;
            v.push_back(i + 1);
        }
    }
    if(zero != 1) {
        cout<<0<<endl;
        return;
    }

    if(v[0]>k){
        cout<<0<<endl;
        return;
    }

    sum = 0;
    int ind = -1;
    for(int i = 0;i<n;i++){
        if (s[i] == 'L')
        {
            sum--;
        }
        if (s[i] == 'R')
        {
            sum++;
        }
        if(sum == 0){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        cout<<zero<<endl;
        return;
    }

      int full  = (k-v[0]) / (ind+1);
      cout<<full+1<<endl;
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