#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  int maxdiff = v[n-1]-v[0];
  cout<<maxdiff<<" ";
  int l = 0;
  int r = n-1;
  int rele= 1;
  int lele = 1;
  if(v[0] == v[n-1]){
    cout<<n*(n-1)/2;
    return;
  }
  for(int i = 1 ;i<n-1;i++){
    if(v[i] == v[0])lele++;
    else if(v[i] ==v[n-1])rele++;
  }
  cout<<rele*lele;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}