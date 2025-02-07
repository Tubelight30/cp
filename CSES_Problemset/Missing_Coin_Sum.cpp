#include <bits/stdc++.h>
using namespace std;
#define int long long int
int chksum(vector<int> &v,int chk){
    int low = 0;
    int high = v.size()-1;
    while(low<high){
        if(v[low]+v[high]==chk){
            return 1;
        }
        if(v[low]+v[high]>chk){
            high--;
        }else{
            low++;
        }
    }
    return 0;
}
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
    // cout<<mp[0]<<endl;
    sort(v.begin(), v.end());
    for(int i = 1;i<sum;i++){
        if(mp[i] == 0 && chksum(v,i) == 0){
            cout<<i<<endl;
            return;
        }
    }
}

int32_t main()
{
    solve();
    return 0;
}