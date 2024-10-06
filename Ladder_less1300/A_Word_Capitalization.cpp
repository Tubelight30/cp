#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  if(s[0] >=97){
    s[0] = 65 + s[0]-97;
  }
  cout<<s<<endl;
}

int main(){
        solve();
    return 0;
}