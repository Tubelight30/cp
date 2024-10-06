#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  int sum = 0;
  for(int i = 0;i<n-1;i++){
    int temp;
    cin>>temp;
    sum+=temp;
  }
  int sumn = (n*(n+1))/2;
  cout<<sumn-sum<<endl;
}

int32_t main(){
        solve();
    return 0;
}