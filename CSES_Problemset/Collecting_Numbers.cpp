#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  map<int,int> mp;
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    mp[temp] = i;
  }
  int rounds = 1;

  for(int i = 2;i<=n;i++){
    if(mp[i]<mp[i-1]){
        rounds++;
    }
  }
  cout<<rounds<<endl;
}

int32_t main(){
        solve();
    return 0;
}