#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    for(int i  =0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(m == n){
        cout<<v[m-1]-v[0]<<endl;
        return;
    }
    int l = 0;
    int r = n-1;
    int mindiff =INT_MAX;
    while(r<m){
        int diff = v[r]-v[l];
        mindiff = min(diff,mindiff);
        l++;
        r++;
    }
    cout<<mindiff<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}