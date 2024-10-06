#include <bits/stdc++.h>
using namespace std;


bool comp(pair<int,int> p1,pair<int,int> p2){
  return p1.first<p2.first;
}

void solve(){
  int n,d;
  cin>>n>>d;
  vector<pair<int,int>> v1;
  for(int i = 0;i<n;i++){
    int t1,t2;
    cin>>t1>>t2;
    v1.push_back({t1,t2});
  }
  for(auto ele: v1){
    cout<<ele.first<<" "<<ele.second<<endl;
    
  }
  sort(v1.begin(),v1.end(),comp);
    for(auto ele: v1){
    cout<<ele.first<<" "<<ele.second<<endl;
    
  }
  int l = 0;
  int r = 0;
  int maxf = 0;
  int sum = v1[0].second;
  while(r<n){
    sum += v1[r].second;
    if(v1[l].first)
  }
}

int main(){
    // int t = 0;
    // cin>>t;
    // while(t--){
        solve();
    // }

    return 0;
}