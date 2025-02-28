#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int k;
  cin>>k;
  if((k-1)%3 == 0){
    cout<<"YES"<<endl;
    return;
  }
  cout<<"NO"<<endl;
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