#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  int count = 0;
  if(n == 0){
    cout<<1<<endl;
    return;
  }
  if(n == 1){
    cout<<2<<endl;
    return;
  }
//   cout<<n%15<<endl;
  int ans = ((n/15)*3)+3;
  if(n%15 == 0)ans-=2;
  if(n%15 == 1)ans-=1;
  cout<<ans<<endl;

//   for(int i = 0;i<=n;i++){
//     if(i%3 == i%5){ 
//         count++;
//         // cout<<i<<endl;
//     }
//   }
//   cout<<count<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}