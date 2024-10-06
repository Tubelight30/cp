#include <bits/stdc++.h>
using namespace std;

void solve(){
  vector<int> prime = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,51};
  int n,m;
  cin>>n>>m;
  for(int i = 0;i<n;i++){
    if(prime[i] == n){
      if(prime[i+1] == m){
        cout<<"YES"<<endl;
        break;
      }else{
        cout<<"NO"<<endl;
      }
    }
  }
}

int main(){
        solve();
    return 0;
}