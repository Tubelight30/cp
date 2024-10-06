#include <bits/stdc++.h>
using namespace std;

void solve(){
  int m,p;
  cin>>m>>p;
  int k = 0;
  for(int i = m;i<299;i++){
    p+=20;
    if(p+i<1000){
        // cout<<i<<endl;
        k++;
    }
  }
  cout<<k<<endl;
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}