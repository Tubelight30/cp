#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
//   if(n == 1){
//     cout<<0;
//     return;
//   }
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }
  int val = v[k-1];
  int diff = -1;
  for(int i =  k-1;i>=0;i--){
    if(v[i] != val){
        diff = i;
        break;
    }
  }
  for(int i  =0;i<n;i++){
    if(i>=k-1 && v[i] != val){
        cout<<-1;
        return;
    }
  }
  int ans = diff+1;
  cout<<ans;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}