#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int mod = 1e9+7;
  int n;
  cin>>n;
  int ans = 1;
  for(int i =0;i<n;i++){
    ans = (2*ans)%mod;
  }
  cout<<ans<<endl;
}

int32_t main(){
    solve();
    return 0;
}