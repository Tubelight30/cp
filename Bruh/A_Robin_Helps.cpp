#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
  int robingold = 0;
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }
  int count = 0;
  for(int i = 0;i<n;i++){
    if(v[i]>=k){
        robingold+=v[i];
    }
    else if(v[i] == 0){
        if(robingold>0){
            robingold--;
            count++;
        }
    }
  }
  cout<<count<<endl;
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}