#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int a,k,p;
  cin>>a>>k>>p;
  double val = ceil(abs((double)k/(double)p));
  if(a<abs(val)){
    cout<<-1<<endl;
    return;
  }
  cout<<abs(val)<<endl;
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