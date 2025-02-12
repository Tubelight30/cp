#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  unordered_map<int,int> mp;
  for(int i = 0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
  }
  int ans = -1;
  int count = 0;
  for(auto p: mp){
    if(p.second>=2){
        ans = p.first;
        count = p.second;
    }
  }
  if(ans != -1){
    cout<<1<<endl;
    cout<<ans<<" ";
  }else{
    cout<<-1<<endl;
  }

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