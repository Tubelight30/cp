#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int count = 0;
  for(int i = 0;i<n;i++){
    if(s[i] == 'A') count++;
  }
  count > n/2 ? cout<<"Anton" : (count == n/2 && n%2 ==0)? cout<<"Friendship" : cout<<"Danik";
}

int32_t main(){
        solve();
    return 0;
}