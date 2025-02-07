#include <bits/stdc++.h>
using namespace std;
#define int long long int

//simple logic, observational problem
//just dry run 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int,int> mp;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        sum += v[i];
    }
    sort(v.begin(), v.end());
    if(v[0] != 1) {
        cout<<1<<endl;
        return;
    }
    int prefixsum = 1;
    for(int i = 1;i<v.size();i++){
        if(v[i]>prefixsum+1){
            cout<<prefixsum+1<<endl;
            return;
        }
        prefixsum+=v[i];
    }
    cout<<prefixsum+1<<endl;
}

int32_t main()
{
    solve();
    return 0;
}