#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> uni(n);
    // set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> uni[i];
        // st.insert(v[i]);
    }
    // vector<int> uni;
    // for (auto ele : st)
    // {
    //     uni.push_back(ele);
    // }
    sort(uni.begin(), uni.end());
    uni.erase(unique(uni.begin(), uni.end()), uni.end());
    int maxl = 0;
    for (int i = 0; i < uni.size(); i++)
    {
        //rightmost posi where val <= uni[i]+n
        int posi = lower_bound(uni.begin()+i+1,uni.end(),uni[i]+n)-uni.begin();

        maxl = max(maxl,posi-i);
    }
    cout<<maxl<<endl;
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