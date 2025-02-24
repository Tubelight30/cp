#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,x;
  cin>>n>>x;
  
  vector<int> v(n);
  int sum = 0;
  map<int,int> mp;
  mp[0]++;
  int ans = 0;
  for(int i = 0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
    ans += mp[sum-x];
    mp[sum]++;
  }
  cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}