#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k;
  cin>>n>>k;
  int q = 0;
  while(k<=240){
    q++;
    k += 5*q;
  }
  cout<<min(q-1,n)<<endl;
}

int main(){
    solve();
    // int t = 0;
    // cin>>t;
    // while(t--){
    //     solve();
    // }

    return 0;
}