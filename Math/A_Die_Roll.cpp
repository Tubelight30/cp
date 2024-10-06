#include <bits/stdc++.h>
using namespace std;

void solve(){
  int y,w;
  cin>>y>>w;
  int maxi = max(y,w);
  int numerator = 6 - (maxi-1);
  int denom = 6;
  if(numerator%2 == 0){
    numerator = numerator/2;
    denom = denom/2;
  }
  if(numerator%3 == 0){
    numerator = numerator/3;
    denom = denom/3;
  }
  cout<<numerator<<"/"<<denom<<endl;
}

int main(){
        solve();
    return 0;
}