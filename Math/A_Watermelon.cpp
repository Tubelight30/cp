#include <bits/stdc++.h>
using namespace std;

void solve(){
  int w;
  cin>>w;
  if(w<=3){
    cout<<"NO"<<endl;
    return;
  }
  if((w-2)%2 == 0){
    cout<<"YES"<<endl;
    return;
  }
  cout<<"NO"<<endl;
}

int main(){
    // int t = 0;
    // cin>>t;
    // while(t--){
        solve();
    // }

    return 0;
}