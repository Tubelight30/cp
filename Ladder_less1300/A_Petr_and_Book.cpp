#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(7);
  for(int i = 0;i<7;i++){
    cin>>v[i];
  }
  int j = 0;
  while(n>0){
    n-=v[j];
    if(n>0) j = (j+1)%7;
  }
  cout<<j+1<<endl;
}

int32_t main(){
        solve();
    return 0;
}