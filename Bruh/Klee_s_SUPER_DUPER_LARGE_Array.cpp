#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n,k;
  cin>>n>>k;

//   long long ele = n;
  long long N = k+n-1;

  long long sumn = (N*(N+1))/2;
//   cout<<sumn<<endl;
  long long sumk = ((k-1)*k)/2;
  long long sumarr = sumn-sumk;
//   cout<<sumarr<<endl;

  long long sum = sumarr;
  long long j = k+(n/2)-1;
  long long minsum = LONG_LONG_MAX;
  for(long long i = 0;i<n;i++){
    sum = abs(sum-2*j);
    if(abs(sum)<minsum){
        minsum = sum;
    }
    else if(abs(sum)>=minsum){
        // cout<<i<<endl;
        break;
    }
    j++;
  }
  cout<<minsum<<endl;

}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}