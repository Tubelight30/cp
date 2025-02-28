#include <bits/stdc++.h>
using namespace std;
#define int long long int
int check(vector<int> &p, string s, int val, int k)
{
    string temp = "";
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] > val)
        {
            temp+=s[i];
        }
    }
    char last = 'R';
    int ans = 0;
    for(int i = 0;i<temp.size();i++){
        if(temp[i] == 'B' && last =='R'){
            ans++;
        }
        last = temp[i];
    }
    return ans;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin>>s;
    vector<int> p(n);
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        maxi = max(p[i], maxi);
    }
    
    int low = 0;
    int ans = -1;
    int high = maxi;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        int val = check(p, s, mid, k);
        if (val<= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout<<ans<<endl;
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