#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<string> v(n);
  for(int i = 0;i<n;i++){
    string t1,t2;
    cin>>t1>>t2;
    v[i] = t1+t2;
  }
  int zeroleft = 0;
  int zeroright = 0;
  for(int i = 0;i<n;i++){
    if(v[i][0] == '0') zeroleft++;
    if(v[i][1] == '0') zeroright++;
  }
  int left = min(zeroleft,n-zeroleft);
  int right = min(zeroright,n-zeroright);
  cout<<left+right<<endl;
  
}

int32_t main(){
    solve();
    return 0;
}