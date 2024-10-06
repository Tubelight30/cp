#include <bits/stdc++.h>
using namespace std;

void solve(){
  int k,l,m,n,d;
  cin>>k;
  cin>>l;
  cin>>m;
  cin>>n;
  cin>>d;
  int s = 0;
  for(int i = 1;i<=d;i++){
    if(i%k && i%l && i%m && i%n) s++; // all numbers not divisible by all klmn will be saved
  }
  cout<<d-s<<endl;
}

int main(){
    solve();

    return 0;
}
// 2
// 3
// 4
// 5
// 24
