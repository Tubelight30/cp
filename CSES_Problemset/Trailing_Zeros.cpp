#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;   
  int ans =0;
  for(int i = 5;i<=n;i*=5){
    ans+=n/i;
  }
  cout<<ans<<endl;
}

int32_t main(){
        solve();
    return 0;
}