#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n;
  cin>>n;
  vector<long long> v(n);
  for(long long i = 0;i<n;i++){
    cin>>v[i];
  }
  long long sum = 0;
  for(long long i = 0;i<=n-3;i++){
    sum+=v[i];
  }
  long long ans = v[n-2]-sum;
  cout<<v[n-1]-ans<<endl;
}

int main(){
    long t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    // return 0;
}
