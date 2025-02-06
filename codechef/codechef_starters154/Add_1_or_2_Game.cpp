#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  if(n == 1){
    cout<<"ALICE"<<endl;
    return;
  }
  if(n == 2){
    cout<<"BOB"<<endl;
    return;
  }

  if(n%2 != 0){
    cout<<"BOB"<<endl;
    return;
  }else{
    cout<<"BOB"<<endl;
  }
}

int32_t main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}