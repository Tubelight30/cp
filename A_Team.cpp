#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  int problem = 0;
  for(int i = 0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c>=2) problem++;
  }
  cout<<problem<<endl;
}

int32_t main(){
        solve();
    return 0;
}