#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  vector<int> cnt(n+1,0);
  for(int i = 0;i<n;i++){
    cin>>v[i];
    if(v[i]<=n) cnt[v[i]]++;
  }
  int min = v.front();

  vector<int> mx(n+1,0);
  for(int i  =1;i<=n;i++){
    for(int j = i;j<=n;j+=i){
        mx[j]+=cnt[i];
    }
  }
  cout<<*max_element(mx.begin(),mx.end())<<endl;
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