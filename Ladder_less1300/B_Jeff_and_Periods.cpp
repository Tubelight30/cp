#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  map<int, vector<int>> mp;
  for(int i = 0;i<n;i++){
    cin>>v[i];

    // if(mp[v[i]][mp[v[i]].size()-1] == -1) continue;
    if(mp[v[i]].empty()) {
        mp[v[i]].push_back(i);
    } else if(mp[v[i]].size() == 1) {
        mp[v[i]].push_back(i);
    } else {
        int period = mp[v[i]][1] - mp[v[i]][0];
        if(i - mp[v[i]].back() == period) {
            mp[v[i]].push_back(i);
        } else {
            mp[v[i]].push_back(-1);
        }
    }
  }
  int count = 0;
  for(auto i: mp){
    if(i.second.back() != -1) {
        count++;
    }
  }
  cout<<count<<endl;
  for(auto i: mp){
    if(i.second.back() != -1) {
        cout<<i.first<<" ";
        if(i.second.size()==1){
            cout<<0;
        }
        else if(i.second.size()>=2){
            cout<<i.second[1]-i.second[0];
        }
        cout<<endl;
    }
  }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}