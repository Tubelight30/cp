#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a,b;
  cin>>a>>b;
  int min = INT_MAX;
  for(int i = a;i<=b;i++){
    int ans = (i-a)+(b-i);
    if(ans<min){
        min = ans;
    }
  }
  cout<<min<<endl;
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}