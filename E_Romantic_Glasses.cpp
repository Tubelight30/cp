#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  map<int,int> mp;
  mp[0] = 1;
  int s =0;
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }
  int target = 0;
  for(int i = 0;i<n;i++){
    v[i] *= ((i % 2) ? -1 : 1);
    s+=v[i];
    int req = s-target;
    if(mp[req]){
        cout<<"YES"<<endl;
        return;
    }
    mp[s]++;
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