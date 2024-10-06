#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }
  int mini = INT_MAX;
  int maxi = INT_MIN;
  for(auto ele:v){
    mini = min(ele,mini);
    maxi = max(ele,maxi);
  }
  int diff = maxi-mini;
  
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}