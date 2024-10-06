#include <bits/stdc++.h>
using namespace std;

void solve(){
  int x,y,z;
  cin>>x>>y>>z;
  if(y-x == z-y){
    cout<<0<<endl;
    return;
  }
  cout<<1<<endl;
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}