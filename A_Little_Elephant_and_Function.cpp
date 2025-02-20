#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int x;
  cin>>x;
  if(x == 1){
    cout<<1;
    return;
  }
  if(x == 2){
    cout<<2<<" "<<1;
    return;
  }
  cout<<x<<" ";
  for(int i  =1;i<x;i++){
    cout<<i<<" ";
  }
//   cout<<ans;

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}