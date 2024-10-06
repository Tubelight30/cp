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
  int moves = 0;
  for(int i = 1;i<n;i++){
    if(v[i]<v[i-1]){
        moves+= (v[i-1]-v[i]);
         v[i] = v[i]+(v[i-1]-v[i]);
    }
   
  }
  cout<<moves<<endl;
}

int32_t main(){
        solve();
    return 0;
}