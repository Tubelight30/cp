#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int m = 0;
  for(int i =0;i<n-1;i++){
    if(s[i] == s[i+1]){
        m++;
    }
  }
  cout<<m<<endl;
}

int main(){
        solve();
    return 0;
}